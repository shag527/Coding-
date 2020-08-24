// Program to find the subarray with maximum sum in an array (Kadane's Algorithm)
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(x,n,d) for(int i=x;i<n;i+=d)  
#define fb(x,n,d) for(int i=n-1;i>=x;i-=d)
int32_t main()
{
    ll n,presum=0,res=0;
    cin>>n;
    vector<ll>arr(n);
    f(0,n,1)
    {
        cin>>arr[i];
        if(i==0)
        presum=arr[i];
        else
        {
            presum=max(presum+arr[i],arr[i]);
            res=max(res,presum);
        }
    }
    cout<<res<<endl;
    return 0;
}