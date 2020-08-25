// Program to find index of total occurences of a number in a sorted array

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(x,n,d) for(int i=x;i<n;i+=d)
int first_occur(vector<ll>v,int num,int l,int r)
{
    while(l<=r)
    {
        ll mid=l+(r-l)/2;
        if(v[mid]==num)
        {
            if(mid!=0&&v[mid-1]!=v[mid]||mid==0)
            return mid;
            else
            {
                r=mid-1;
            }
            
        }
        else if(num<v[mid])
        r=mid-1;
        else
        l=mid+1;
    }
    return 0;
}
int last_occur(vector<ll>v,int num,int l,int r)
{
    while(l<=r)
    {
        ll mid=l+(r-l)/2;
        if(v[mid]==num)
        {
            if(mid!=v.size()-1&&v[mid+1]!=v[mid]||mid==v.size()-1)
            return mid;
            else
            {
                l=mid+1;
            }
            
        }
        else if(num<v[mid])
        r=mid-1;
        else
        l=mid+1;
    }
    return 0;
}
int32_t main()
{
    ll n,num;
    cin>>n>>num;
    vector<ll>v(n);
    f(0,n,1)
    cin>>v[i];
    if(first_occur(v,num,0,n-1)!=0)
    {
        cout<<last_occur(v,num,0,n-1)-first_occur(v,num,0,n-1)+1<<endl;
    } 
    else
    cout<<"No occurence found"<<endl;
    return 0;
}