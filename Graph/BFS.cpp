#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(x,n,t) for(int i=x;i<n;i+=t)
void bfs(vector<int>adj[],int s,vector<bool>&visited)
{
    queue<int>q;
    visited[s]=true;
    q.push(s);
    while (!q.empty())
    {
        int u=q.front();
        q.pop();
        cout<<u<<" ";
        f(0,adj[u].size(),1)
        {
            
            if(visited[adj[u][i]]==0)
            {
                visited[adj[u][i]]=true;
                q.push(adj[u][i]);
            }
        }
    }
    cout<<endl;
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
        bfs(adj,i,visited);
    }
    return 0;
}