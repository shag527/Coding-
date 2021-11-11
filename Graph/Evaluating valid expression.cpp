/* Given expression in the form of a<b or b<c, evaluate if they form valid dependency */

#include<bits/stdc++.h>
using namespace std;
void add_edge(int a,int b,vector<int>adj[])
{
    adj[a].push_back(b);
    return;
}
bool check_cycle(vector<int>adj[],vector<int>&vis,int s)
{
    if(vis[s]==0)
    {
        vis[s]=-1;
        for(int i=0;i<adj[s].size();i++)
        {
            if(vis[adj[s][i]]==-1||vis[adj[s][i]]==0&&!check_cycle(adj,vis,adj[s][i]))
            {
                return false;
            }
        }
        vis[s]=1;
        return true;
    }
    return false;
}
int32_t main()
{
    int n=0;
    string s;
    cin>>n;
    vector<vector<string>>expr;
    vector<int>adj[26],vis(26);
    unordered_map<string,int>mp;
    int idx=0;
    for(int i=0;i<n;i++)
    {
        vector<string>temp;
        for(int j=0;j<3;j++)
        {
            cin>>s;
            temp.push_back(s);
        }
        expr.push_back(temp);
        // creating graph from given expressions
        if(expr[i][1]=="<")
        {
            if(mp.find(expr[i][0])==mp.end())
            {
                mp[expr[i][0]]=idx;
                idx++;
            }
            if(mp.find(expr[i][2])==mp.end())
            {
                mp[expr[i][2]]=idx;
                idx++;
            }
            add_edge(mp[expr[i][0]],mp[expr[i][2]],adj);
        }
        if(expr[i][1]==">")
        {
            if(mp.find(expr[i][0])==mp.end())
            {
                mp[expr[i][0]]=idx;
                idx++;
            }
            if(mp.find(expr[i][2])==mp.end())
            {
                mp[expr[i][2]]=idx;
                idx++;
            }
            add_edge(mp[expr[i][2]],mp[expr[i][0]],adj);
        }
        
    }
    int flag=0;
    for(auto i:mp)
    {
        if(vis[i.second]==0&&!check_cycle(adj,vis,i.second))
        {
            cout<<"Not valid\n";
            flag=1;
            break;
        }
    }
    if(flag==0)
    cout<<"Valid\n";
    
    
    return 0;
}
