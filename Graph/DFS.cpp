#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(x,n,t) for(int i=x;i<n;i+=t)
void dfs(vector<int>adj[],int s,vector<bool>&visited)
{
    visited[s]=true;
    cout<<s<<" ";
    f(0,adj[s].size(),1)
    if(visited[adj[s][i]]==0)
    dfs(adj,adj[s][i],visited);
}
void add_edge(vector<int>adj[],int u,int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,u,v,e;
    cin>>n>>e;
    vector<int>adj[n];
    f(0,e,1)
    {
        cin>>u>>v;
        add_edge(adj,u,v);
    }
    vector<bool>visited(n,false);
    f(0,n,1)
    {
        if(visited[i]==false)
        {
            dfs(adj,i,visited);
            cout<<endl;
        }
    }
    return 0;
}