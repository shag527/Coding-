// Program to print prime factors of a number 
#include<bits/stdc++.h>
using namespace std;
#define f(i,n) for(int i=3;i<=sqrt(n);i++)
#define ll long long
const int MOD = 1e9+7;
void print_prime_factors(ll n)
{
    while(n%2==0)
    {
        cout<<"2 ";
        n/=2;
    }
    f(i,n)
    {
        while(n%i==0)
        {
            cout<<i<<" ";
            n/=i;
        }
    }
    if(n>1)
    cout<<n;
    cout<<endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll num;
    cin>>num;
    print_prime_factors(num);
    return 0;
} 