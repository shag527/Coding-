//Program to check if a string is a palindrome
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod=1e+7;
int check_palindrome(string s,int start,int end)
{
    if(start>=end)
    return 1;
    return (s[start]==s[end]&&check_palindrome(s,start+1,end-1));
}
int32_t main()
{
    string s;
    cin>>s;
    if(check_palindrome(s,0,s.size()-1)==1)
    cout<<"Yes"<<endl;
    else
    cout<<"No"<<endl;
}