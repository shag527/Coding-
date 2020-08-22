//Program to find leaders in an array
// A leader is an element which doesnot have any greater or equal element to it's right
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fi(x,n,d) for(int i=x;i<n;i+=d)
#define fd(x,n,d) for(int i=n-1;i>=x;i-=d)
void find_leaders(vector<ll>v)
{
    ll max_val=v[v.size()-1];
    cout<<v[v.size()-1]<<" ";
    fd(0,v.size()-1,1)
    {
       if(v[i]>max_val)
       {
           cout<<v[i]<<" ";
           max_val=v[i];
       }
    }
    cout<<endl;
}
int main()
{
    ll n;
    cin>>n;
    vector<ll>v(n);
    fi(0,n,1)
    cin>>v[i];
    find_leaders(v);
    return 0;
}