#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(x,n,t) for(int i=x;i<n;i+=t)

void add_edge(vector<pair<int,int>>adj[],int u,int v,int dist)
{
    adj[u].push_back(make_pair(v,dist));
    adj[v].push_back(make_pair(u,dist));
}

void shortest_paths(vector<pair<int,int>>adj[],int src,int v,int e)
{
    set<pair<int,int>>s;
    vector<int>dist(v,INT_MAX);
    s.insert(make_pair(0,src));
    dist[src]=0;
    
    while(!s.empty())
    {
        pair<int,int>temp=*s.begin();
        s.erase(s.begin());
        int u=temp.second;
        
        for(int i=0;i<adj[u].size();i++)
        {
            int v=adj[u][i].first;
            int wt=adj[u][i].second;
            
            if(dist[v]>dist[u]+wt)
            {
                if(dist[v]!=INT_MAX)
                    s.erase(s.find(make_pair(dist[v],v)));
                    
                dist[v]=dist[u]+wt;
                s.insert(make_pair(dist[v],v));
            }
        }
    }
    
    //Printing the shortest distances from source to all edges
    for(int i=0;i<dist.size();i++)
    cout<<i<<" "<<dist[i]<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,u,v,e,dist;
    cin>>n>>e;
    vector<pair<int,int>>adj[n];
    f(0,e,1)
    {
        cin>>u>>v>>dist;
        add_edge(adj,u,v,dist);
    }
    
    shortest_paths(adj,0,n,e);
    return 0;
}
