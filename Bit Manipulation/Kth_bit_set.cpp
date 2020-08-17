//Program to check if kth bit is set in a number
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int MOD=1e9+7;
int check_k_bit(ll n,ll k)
{
    return (n>>(k-1)&1==1);
}
int32_t main()
{
    ll num,k;
    cin>>num>>k;
    if(check_k_bit(num,k))
    cout<<"Yes"<<endl;
    else
    cout<<"No"<<endl;
    return 0;
}
