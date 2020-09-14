// Program to sort an array with 3 different types of elements (Dutch National Flag Algorithm)

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fi(x,n,d) for(int i=x;i<n;i+=d)
#define fj(x,n,d) for(int j=x;j<n;j+=d)
void quick_sort(vector<ll>&v, ll l, ll mid, ll r)
{
    while(mid<=r)
    {
        switch(v[mid])
        {
            case 0:
            swap(v[l],v[mid]);
            l++;
            mid++;
            break;
            case 1:
            mid++;
            break;
            case 2:
            swap(v[r],v[mid]);
            r--;
        }
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    vector<ll>v(n);
    fi(0,n,1)
    cin>>v[i];
    quick_sort(v,0,0,n-1);
    fi(0,v.size(),1)
    cout<<v[i]<<" ";
    cout<<endl;
    return 0;
}