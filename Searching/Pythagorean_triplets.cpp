// Program to find a triplet (a,b,c) such that a^2+b^2=c^2
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fi(x,n,d) for(int i=x;i<n;i+=d)
#define fj(x,n,d) for(int j=x;j<n;j+=d)
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    vector<ll>v(n);
    unordered_map<ll,ll>s;
    fi(0,n,1)
    {
        cin>>v[i];
        s[v[i]*v[i]]++;
    }
    fi(0,n,1)
    {
        fj(i+1,n,1)
        {
            ll sum=v[i]*v[i]+v[j]*v[j];
            if(s[sum]!=0)
            {
                cout<<v[i]<<" "<<v[j]<<" "<<sqrt(sum)<<endl;
            }
        }
    }
    return 0;
}