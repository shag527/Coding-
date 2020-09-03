// Program to find inversions in an array i.e i<j and arr[j]>arr[i]

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fi(x,n,d) for(int i=x;i<n;i+=d)
#define fj(x,n,d) for(int j=x;j<n;j+=d)
ll lomuto_partition(vector<ll>&v,ll l, ll r)
{;
    ll pivot=v[r];
    ll i=l;
    fj(l,r,1)
    {
        if(v[j]<pivot)
        {
            swap(v[i],v[j]);
            i++;
        }
    }
    swap(v[i],v[r]);
    return i;
}
void quick_sort(vector<ll>&v,ll l, ll r)
{
    if(l<r)
    {
        ll p=lomuto_partition(v,l,r);
        quick_sort(v,l,p-1);
        quick_sort(v,p+1,r);
    }
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    vector<ll>v(n);
    fi(0,n,1)
    cin>>v[i];
    quick_sort(v,0,n-1);
    fi(0,v.size(),1)
    cout<<v[i]<<" ";
    cout<<endl;
    return 0;
}