// Program to check the only odd times occuring number in an array
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(x,n) for(int i=x;i<n;i++)
int32_t main()
{
    ll n;
    cin>>n;
    ll arr[n];
    f(0,n)
    {
        cin>>arr[i];
    }
    ll res=arr[0];
    f(1,n)
    res=res^arr[i];
    cout<<res<<endl;
    return 0;
}