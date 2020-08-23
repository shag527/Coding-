// Program to find the minimum no. of group flips required to make the binary array same
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(x,n,d) for(int i=x;i<n;i+=d)  
#define fb(x,n,d) for(int i=n-1;i>=x;i-=d)
int32_t main()
{
    ll n;
    cin>>n;
    vector<ll>arr(n);
    f(0,n,1)
    {
        cin>>arr[i];
        if(i!=0&&arr[i]!=arr[i-1])
        {
            if(arr[i]!=arr[0])
            cout<<"From "<<i<<" to ";
            else
            cout<<i-1<<endl;
        }
    }
    if(arr[n-1]!=arr[0])
    cout<<n-1<<endl;
    return 0;
}