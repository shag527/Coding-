//Program to count set bits in binary representation of a number
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int MOD=1e9+7;
int count_set_bits(ll n)
{
    int count=0;
    while(n!=0)
    {
        n=n&(n-1);
        count++;
    }
    return count;
}
int32_t main()
{
    ll num;
    cin>>num;
    cout<<count_set_bits(num)<<endl;
    return 0;
}