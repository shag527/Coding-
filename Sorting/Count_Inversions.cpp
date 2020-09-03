// Program to find inversions in an array i.e i<j and arr[j]>arr[i]

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fi(x,n,d) for(int i=x;i<n;i+=d)
#define fj(x,n,d) for(int i=x;i<n;i+=d)
ll merge(vector<ll>&v,ll l, ll mid, ll r)
{
    ll count_inv=0;
    ll n1=mid-l+1,n2=r-mid;
    vector<ll>v1(n1),v2(n2);
    fi(0,n1,1)
    v1[i]=v[l+i];
    fi(0,n2,1)
    v2[i]=v[mid+1+i];
    ll i=0,j=0,k=l;
    while(i<n1&&j<n2)
    {
        if(v1[i]<=v2[j])
        {
            v[k]=v1[i];
            i++;
            k++;
        }
        else
        {
            v[k]=v2[j];
            j++;
            k++;
            count_inv+=(n1-i);
        }
        
    }
    while(i<n1)
    v[k++]=v1[i++];
    while(j<n2)
    v[k++]=v2[j++];
    return count_inv;
}
ll merge_sort(vector<ll>&v,ll l, ll r)
{
    ll count_inv=0;
    if(l<r)
    {
        ll mid=l+(r-l)/2;
        count_inv+=merge_sort(v,l,mid);
        count_inv+=merge_sort(v,mid+1,r);
        count_inv+=merge(v,l,mid,r);
        return count_inv;
    }
    return count_inv;
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
    cout<<merge_sort(v,0,n-1)<<endl;
    return 0;
}