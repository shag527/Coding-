// Program to find median of 2 sorted arrays when combined

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(x,n,d) for(int i=x;i<n;i+=d)
double find_median(vector<ll>v1,vector<ll>v2, ll n1, ll n2)
{
    int begin=0,end=n1;
    while(begin<=end)
    {
        ll i1=(begin+end)/2;
        ll i2=(n1+n2+1)/2-i1;
        ll min1=(i1==n1)?INT_MAX:v1[i1];
        ll max1=(i1==0)?INT_MIN:v1[i1-1];
        ll min2=(i2==n2)?INT_MAX:v2[i2];
        ll max2=(i2==0)?INT_MIN:v2[i2-1];
        if(max1<=min2&&min1>=max2)
        {
            if((n1+n2)%2==0)
            return (double)(max(max1,max2)+min(min1,min2))/2;
            else
            return (double)max(max1,max2);
        }
        else if(max1>min2)
        end=i1-1;
        else
        begin=i1+1;
    }
    return -1;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n1,n2;
    cin>>n1>>n2;
    vector<ll>v1(n1),v2(n2);
    f(0,n1,1)
    cin>>v1[i];
    f(0,n2,1)
    cin>>v2[i];
    if(n1>n2)
    cout<<find_median(v2,v1,n2,n1)<<endl;
    else
    cout<<find_median(v1,v2,n1,n2)<<endl;
    return 0;
}