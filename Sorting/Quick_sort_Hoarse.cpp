// Program to sort an array using hoarse partition of quick sort

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fi(x,n,d) for(int i=x;i<n;i+=d)
#define fj(x,n,d) for(int j=x;j<n;j+=d)
ll hoarse_partition(vector<ll>&v,ll l, ll r)
{;
    ll pivot=v[l];
    ll i=l,j=r;
    while(1)
    {
        while(v[i]<pivot)
        i++;
        while(v[j]>pivot)
        j--;
        if(i>=j)
        return j;
        swap(v[i],v[j]);
    }
    return i;
}
void quick_sort(vector<ll>&v,ll l, ll r)
{
    if(l<r)
    {
        ll p=hoarse_partition(v,l,r);
        quick_sort(v,l,p);
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