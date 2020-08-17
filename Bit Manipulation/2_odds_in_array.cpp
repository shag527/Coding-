// Program to check the 2 numbers occuring odd times in an array
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(x,n) for(int i=x;i<n;i++)
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    ll arr[n],sb,res1=0,res2=0;
    f(0,n)
    cin>>arr[i];
    ll res=0;
    f(0,n)
    res=res^arr[i];
    sb=res & ~(res-1);  
    f(0,n)
    {
        if(arr[i]&sb)
        res1=res1^arr[i];
        else
        res2=res2^arr[i];
    }
    cout<<res1<<" "<<res2<<endl;
    return 0;
}