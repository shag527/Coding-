//Program to check if a string is a palindrome
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod=1e+7;
void print_subset(string s,int n,int i,string res)
{
    if(i==n)
    {
        cout<<res<<endl;
        return;
    }
    print_subset(s,n,i+1,res);
    print_subset(s,n,i+1,res+=(s[i]));
}
int32_t main()
{
    string s,res;
    cin>>s;
    print_subset(s,s.size(),0,res);
    return 0;
}