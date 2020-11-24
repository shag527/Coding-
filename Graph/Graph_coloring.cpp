// Program to color the graph using minimum colors and find its chromatic number

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(x,n,t) for(int i=x;i<n;i+=t)
int V,E;

// Function to assign color to every vertex 
void find_colors(vector<int>adj[], vector<int>&color, int s)
{
    vector<bool>already_assigned(V,false);
    f(0,adj[s].size(),1)
    {
        if(color[adj[s][i]]!=-1)                  
        already_assigned[color[adj[s][i]]]=true;     //Store the already assigned colors 
    }
    f(0,V,1)
    if(already_assigned[i]==0)
    {
        color[s]=i;                                 // Check for the color which is not assigned to any of the adjacents
        break;
    }
}

// Function to traverse every vertecx of the graph
void dfs(vector<int>adj[], int s, vector<bool>&visited, vector<int>&color)
{
    visited[s]=true;
    find_colors(adj,color,s);
    f(0,adj[s].size(),1)                        // DFS traversal 
    if(visited[adj[s][i]]==0)
    dfs(adj,adj[s][i],visited,color);
}

// Function to add edges to adjacency list
void add_edge(vector<int>adj[],int u,int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);  
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll u,v;
    cout<<"Enter the number of vertices and edges"<<endl;
    cin>>V>>E;
    vector<int>adj[V];
    vector<int>color(V,-1);
    cout<<"Enter the edges (0-V)"<<endl;
    f(0,E,1)
    {
        cin>>u>>v;
        add_edge(adj,u,v);
    }
    vector<bool>visited(V,false);
    f(0,V,1)
    {
        if(visited[i]==false)
        {
            dfs(adj,i,visited,color);
            cout<<endl;
        }
    }
    int chr_no=0;
    cout<<"The corresponding colors are\n";
    f(0,color.size(),1)
    {
        cout<<color[i]<<" ";
        chr_no=max(chr_no,color[i]);
    }
    cout<<"\n\nThe chromatic number of the graph is: "<<chr_no+1<<endl;
    return 0;
}