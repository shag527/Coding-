// Find square root of a number

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(x,n,d) for(int i=x;i<n;i+=d)
int square_root(int num,int l,int r)
{
    ll ans=-1;
    while(l<=r)
    {
        ll mid=l+(r-l)/2;
        if(mid*mid==num)
        return mid;
        else if(mid*mid>num)
        r=mid-1;
        else
        {
            l=mid+1;
            ans=mid;
        }
    }
    return ans;
}
int32_t main()
{
    ll num;
    cin>>num;
    cout<<(square_root(num,0,num-1))<<endl;  
    return 0;
}