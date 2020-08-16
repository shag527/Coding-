// Program to print prime factors of a number 
#include<bits/stdc++.h>
using namespace std;
#define f(i,n) for(int i=3;i<=sqrt(n);i++)
#define ll long long
const int MOD = 1e9+7;
ll compute_power(ll x,ll n)
{
    if(n==0)
    return 1;
    ll temp=compute_power(x,n/2);
    temp=temp*temp;
    if(n%2==0)
    return temp;
    else
    return temp*x;
    
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll x,n;
    cin>>x>>n;
    ll ans=compute_power(x,n);
    cout<<ans<<endl;
    return 0;
} 