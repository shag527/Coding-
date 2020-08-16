// Program to print prime numbers smaller or equal to n
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define fi(x,n,d) for(ll i=x;i<=n;i+=d)
#define fj(x,n,d) for(ll j=x;j<=n;j+=d)
const int MOD=1e9+7;
int isPrime(ll n)
{
    if(n==2||n==3)
    return 1;
    if(n%2==0||n%3==0)
    return -1;
    fi(5,sqrt(n),6)
    if(n%i==0||n%(i+2)==0)
    return -1;
    return 1;
}
void sieve(ll n)
{
    vector<ll>v(n+1);
    fi(2,n,1)
    {
        if(isPrime(i)==1)
        {
            fj(2*i,n,i)
            {
                v[j]=1;
            }
        }
    }
    fi(2,n,1)
    if(v[i]==0)
    cout<<i<<" ";
    cout<<endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll num;
    cin>>num;
    sieve(num);
    return 0;
}