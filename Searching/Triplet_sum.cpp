// Program to find if there is a triplet with the given sum in a sorted array

#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define fi(x,n,d) for(int i=x;i<n;i+=d)
#define fj(x,n,d) for(int j=x;j<n;j+=d)
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,num,p1,p2,flag=0;
    cin>>n>>num;
    vector<ll>v(n);
    fi(0,n,1)
    cin>>v[i];
    fi(0,n,1)
    {
        ll sum=num-v[i],res;
        p1=i+1;
        p2=n-1;
        while(p1<p2)
        {
            if(v[p1]+v[p2]==sum)
            {
                cout<<i<<" "<<p1<<" "<<p2<<endl;
                flag=1;
                break;
            }
            else if(v[p1]+v[p2]>sum)
            p2--;
            else
            p1++;
        }
        if(flag==1)
            break;
    }
    if(flag==0)
    cout<<"No triplet found"<<endl;
    return 0;
}