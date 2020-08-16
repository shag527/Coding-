// Program to check whether the given number is prime or not (efficient way)

#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define f(i,n) for(int i=5;i*i<=n;i+=6)
const int MAX = INT_MAX;
const int MIN = INT_MIN;
const int MOD = 1e9+7;
int isPrime(ll n)
{
    if(n%2==0||n%3==0)
    return -1;
    f(i,n)
    if(n%i==0||n%(i+2)==0)
    return -1;
    return 1;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll num;
    cin>>num;
    if(isPrime(num)==1)
    cout<<"It is prime"<<endl;
    else
    cout<<"It is not prime"<<endl;
    return 0;
}
