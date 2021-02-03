/*  Given an m x n 2d grid map of '1's (land) and '0's (water), return the number of islands.

An island is surrounded by water and is formed by connecting adjacent lands horizontally or vertically. You may assume all four edges of the grid are all
surrounded by water. 

Example:

Input: grid = [
  ["1","1","1","1","0"],
  ["1","1","0","1","0"],
  ["1","1","0","0","0"],
  ["0","0","0","0","0"]
]
Output: 1  */

class Solution {
public:
    vector<int>x={-1,0,1,0};
    vector<int>y={0,1,0,-1};
    void dfs(vector<vector<char>>& grid,vector<vector<int>>& visited, int i, int j)
    {
        int m=grid.size(),n=grid[0].size();
        if(visited[i][j]!=1)
        {
            visited[i][j]=1;
            for(int k=0;k<4;k++)
                if(i+x[k]>=0&&i+x[k]<m&&j+y[k]>=0&&j+y[k]<n)
                    if(grid[i+x[k]][j+y[k]]=='1'&&visited[i+x[k]][j+y[k]]!=1)
                        dfs(grid,visited,i+x[k],j+y[k]);
        }
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int count=0;
        vector<vector<int>>visited(grid.size(),vector<int>(grid[0].size(),0));
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                if(grid[i][j]=='1'&&visited[i][j]!=1)
                {
                    dfs(grid,visited,i,j);
                    count++;
                }
            }
        }
        return count;
    }
};
