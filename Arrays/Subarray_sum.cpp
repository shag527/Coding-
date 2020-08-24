// Given there is an unsorted array of non-negative integers, fing if there is a subarray with the given sum
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(x,n,d) for(int i=x;i<n;i+=d)  
#define fb(x,n,d) for(int i=n-1;i>=x;i-=d)
int32_t main()
{
    ll n,sum=0,curr_sum=0,index=0,flag=0;
    cin>>n>>sum;
    vector<ll>arr(n);
    f(0,n,1)
    {
        cin>>arr[i];
        curr_sum+=arr[i];
        if(curr_sum==sum)
        {
            cout<<"Yes"<<endl;
            flag=1;
            break;
        }
        if(curr_sum>sum)
        {
            while(index<i-1&&curr_sum>sum)
            {
                curr_sum-=arr[index];
                index++;
            }
            if(curr_sum==sum)
            {
                cout<<"Yes"<<endl;
                flag=1;
                break;
            }
        }
    }
    if(flag==0)
    cout<<"No"<<endl;
    return 0;
}