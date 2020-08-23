//Program to find the pair with maximum difference in an array
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(x,n,d) for(int i=x;i<n;i+=d)  
int32_t main()
{
    ll n,curr=0,max_diff=0;
    cin>>n;
    vector<ll>v(n);
    f(0,n,1)
    {
        cin>>v[i];
        if(i==0)
        curr=v[0];
        else
        {
            max_diff=max(max_diff,v[i]-curr);
            if(v[i]<curr)
            curr=v[i];
        }
    }
    cout<<max_diff<<endl;
    return 0;
}