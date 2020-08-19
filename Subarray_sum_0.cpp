//Program to check if there is a subarray with 0 sum
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(x,n,d) for(int i=x;i<n;i+=d)
int32_t main()
{
    int t=0;
    cin>>t;
    while(t--)
    {
        ll n,flag=0;
        cin>>n;
        vector<ll>v(n);
        vector<ll>presum(n);
        unordered_set<ll>count;
        f(0,n,1)
        {
            cin>>v[i];
            if(i!=0)
            presum[i]+=presum[i-1]+v[i];
            else
            presum[i]=v[i];
        }
        f(0,n,1)
        {
            if(presum[i]==0)
            {
                cout<<"Yes"<<endl;
                flag=1;
                break;
            }
            if(count.find(presum[i])!=count.end())
            {
                cout<<"Yes"<<endl;
                flag=1;
                break;
            }
            count.insert(presum[i]);
        }
        if(flag==0)
        cout<<"No"<<endl;
    }
    return 0;
}
