// Insertion sort in an array

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fi(x,n,d) for(int i=x;i<n;i+=d)
#define fj(x,n,d) for(int i=x;i<n;i+=d)
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    vector<ll>v(n);
    fi(0,n,1)
    cin>>v[i];
    fi(0,n,1)
    { 
        ll j=i-1;
        ll key=v[i];
        while(j>=0&&v[j]>key)
        {
            v[j+1]=v[j];
            j--;
        }
        v[j+1]=key;
    }
    fj(0,n,1)
    cout<<v[i]<<" ";
    cout<<endl;
    return 0;
}