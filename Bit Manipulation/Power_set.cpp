// Program to print the power set of string
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fi(x,n) for(int i=x;i<n;i++)
#define fj(x,n) for(int j=x;j<n;j++)
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    ll pow_size=pow(2,s.size());
    fi(0,pow_size)
    {
        fj(0,s.size())
        {
            if(i & (1<<j))
            cout<<s[j];
        }
        cout<<endl;
    }
    return 0;
}