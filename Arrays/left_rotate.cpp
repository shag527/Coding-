//Program to left rotate an array by d spaces
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(x,n,d) for(int i=x;i<n;i+=d)
void reverse(ll arr[],ll l, ll r)
{
    f(l,r+1,1)
    {
        if(i<=r/2)
        {
            ll temp=arr[i];
            arr[i]=arr[r-i+l];
            arr[r-i+l]=temp;
        }
    }
}
void rotate(ll arr[], ll n, ll d)
{
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);
}
int32_t main()
{
    ll n,d;
    cin>>n>>d;
    ll arr[n];
    f(0,n,1)
    cin>>arr[i];
    rotate(arr,n,d);
    f(0,n,1)
    cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}