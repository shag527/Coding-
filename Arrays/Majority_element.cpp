// Program to find the majority element in an array(Number appearing more than n/2 times)
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(x,n,d) for(int i=x;i<n;i+=d)  
#define fb(x,n,d) for(int i=n-1;i>=x;i-=d)
int32_t main()
{
    ll n,count=1,index=0;
    cin>>n;
    vector<ll>arr(n);
    f(0,n,1)
    {
        cin>>arr[i];
        if(i==0)
        index=i;
        else
        {
            if(arr[i]!=arr[i-1])
            count--;
            else
            count++;
            if(count==0)
            {
                index=i;
                count=1;
            }
        }
    }
    cout<<index<<endl;
    return 0;
}