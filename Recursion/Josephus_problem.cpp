//Program to find the position of the survivor when there are n people in a circle and every kth person is killed
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod=1e+7;
ll find_survivor(ll n,ll k)
{
    if(n==1)
    return 1;
    return (find_survivor(n-1,k)+k-1)%n+1;
}
int32_t main()
{
    ll n,k;
    cin>>n>>k;
    cout<<find_survivor(n,k)<<endl;
}