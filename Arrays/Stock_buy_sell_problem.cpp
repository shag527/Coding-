// Program to maximize the profit when prices on each day are given
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(x,n,d) for(int i=x;i<n;i+=d)  
int32_t main()
{
    ll n,max_prof=0,prof=0;
    cin>>n;
    vector<ll>arr(n);
    f(0,n,1)
    cin>>arr[i];
    f(1,n,1)
    {
        if(arr[i]-arr[i-1]>=0)
        prof+=arr[i]-arr[i-1];
        else
        {
            max_prof=max(max_prof,prof);
            prof=0;
        }
    }
    max_prof=max(max_prof,prof);
    cout<<max_prof<<endl;
    return 0;
}