// Program to find the minimum weighted hamiltonian cycle (Travelling Salesman Problem)

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fi(x,n,t) for(int i=x;i<n;i+=t)
#define fj(x,n,t) for(int j=x;j<n;j+=t)

int V,visited_all;
vector<vector<int>>dist,dp;

// Function to find the minimum distance
int tsp(ll mask, ll pos)
{
    if(mask==visited_all)
    return dist[pos][0];
 
    if(dp[mask][pos]!=-1)
    return dp[mask][pos];

    ll res=INT_MAX;

    //Visit all the unvisited cities and take the best route
    fi(0,V,1)
    {
        if((mask&(1<<i))==0)
        {
            ll new_res=dist[pos][i]+tsp(mask|(1<<i),i);
            res=min(res,new_res);
        }
    }

    //Store the cost for future use 
    dp[mask][pos]=res;
    return res;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout<<"Enter the number of cities"<<endl;
    cin>>V;
    cout<<"Enter the distance between all cities"<<endl;
    for(int i=0;i<V;i++)
    {
        vector<int>temp;
        for(int j=0;j<V;j++)
        {
            cout<<"Enter distance between city "<<i<<" and "<<j<<": "<<endl;
            int val;
            cin>>val;
            temp.push_back(val);
            cout<<endl;
        }
        dist.push_back(temp);
    }
    fi(0,V,1)
    {
        fj(0,V,1)
        cout<<dist[i][j]<<" ";
        cout<<endl;
    }
    visited_all=(1<<V)-1;
    int paths=pow(2,V);
    fi(0,paths,1)
    {
        vector<int>temp;
        fj(0,V,1)
        temp.push_back(-1);
        dp.push_back(temp);
    }
    cout<<"Travelling Salesman Distance is:"<<tsp(1,0)<<endl;
    return 0;
}