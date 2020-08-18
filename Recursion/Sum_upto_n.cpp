//Program to print sum upto n natural numbers 
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod=1e+7;
ll sum(ll n)
{
    if(n==0)
    return 0;
    return n+sum(n-1);
}
int32_t main()
{
    ll num;
    cin>>num;
    cout<<sum(num)<<endl;
    return 0;
}