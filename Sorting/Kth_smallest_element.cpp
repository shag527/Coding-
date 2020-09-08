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
int find_smallest(vector<ll>&v,ll l, ll r,int k)
{
    while(l<=r)
    {
        ll p=lomuto_partition(v,l,r);
        if(p==k-1)
        return v[k-1];
        if(p<k-1)
        l=p+1;
        else
        r=p-1;
    }
    return -1;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,num;
    cin>>n>>num;
    vector<ll>v(n);
    fi(0,n,1)
    cin>>v[i];
    cout<<find_smallest(v,0,n-1,num)<<endl;
    return 0;
}