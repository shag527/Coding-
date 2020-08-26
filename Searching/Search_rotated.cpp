// Program to search in a sorted rotated array

#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define f(x,n,d) for(int i=x;i<n;i+=d)
ll search_rotated(vector<ll>v,ll num, int l, int r)
{
    while(l<=r)
    {
        ll mid=l+(r-l)/2;
        if(v[mid]==num)
        return mid;
        else if(v[l]<=v[mid])
        {
            if(num>=v[l]&&num<=v[mid])
            r=mid-1;
            else
            l=mid+1;
        }
        else
        {
            if(num>=v[mid]&&num<=v[r])
            l=mid+1;
            else
            r=mid-1;
        }
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
    f(0,n,1)
    cin>>v[i];
    cout<<search_rotated(v,num,0,n-1)<<endl;
    return 0;
}