// Program for the trapping rainwater problem i.e. to find the maximum rainwater trapped between the blocks
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(x,n,d) for(int i=x;i<n;i+=d)  
#define fb(x,n,d) for(int i=n-1;i>=x;i-=d)
int32_t main()
{
    ll n,max_prof=0,prof=0,l_max=0,r_max=0,total=0;
    cin>>n;
    vector<ll>arr(n),lmax(n),rmax(n);
    f(0,n,1)
    {
        cin>>arr[i];
        if(i==0)
        l_max=arr[0];
        else
        {
            l_max=max(l_max,arr[i]);
            lmax[i]=l_max;
        }
    }
    cout<<endl;
    r_max=arr[n-1];
    fb(0,n-1,1)
    {
        r_max=max(r_max,arr[i]);
        rmax[i]=r_max;
    }
    cout<<endl;
    f(1,n-1,1)
    {
         total+=min(lmax[i],rmax[i])-arr[i];
    }
    cout<<total<<endl;
    return 0;
}