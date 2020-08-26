// Program to find peak element in an array
// A peak element is an element which is not smaller than both of its arrays

#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define f(x,n,d) for(int i=x;i<n;i+=d)
ll search_peak(vector<ll>v, int l, int r)
{
    while(l<=r)
    {
        ll mid=l+(r-l)/2;
        if(mid==0&&v[mid+1]<v[0]||mid==v.size()-1&&v[mid-1]<v[mid]||v[mid]>v[mid-1]&&v[mid]>v[mid+1])
        return v[mid];
        else if(v[mid+1]>v[mid])
        l=mid+1;
        else
        r=mid-1;
    }
    return -1;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    vector<ll>v(n);
    f(0,n,1)
    cin>>v[i];
    cout<<search_peak(v,0,n-1)<<endl;
    return 0;
}