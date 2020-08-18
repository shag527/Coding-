//Program to find the maximum no. of pieces which can be made from a rope of length n such that they are from given 3 values
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod=1e+7;
ll max3(ll a,ll b,ll c)
{
    return (a>b?(a>c?a:c):(b>c)?b:c);
}
ll find_pieces(ll n,ll a,ll b,ll c)
{
    if(n==0)
    return 0;
    if(n<0)
    return -1;
    ll res=max3(find_pieces(n-a,a,b,c),find_pieces(n-b,a,b,c),find_pieces(n-c,a,b,c));
    if(res<0)
    return -1;
    else
    return 1+res;
    
}
int32_t main()
{
    ll n,a,b,c;
    cin>>n>>a>>b>>c;
    cout<<find_pieces(n,a,b,c)<<endl;
    return 0;
}