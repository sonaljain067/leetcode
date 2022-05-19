class Solution {
public:
    //For DFS
    // int moves[4][2]={{-1,0},{1,0},{0,-1},{0,1}};
    // int solve(int i, int j, vector<vector<int>> &matrix){
    //     int maxx=1;
    //      for(int k=0;k<4;k++){
    //          int new_i=i+moves[k][0], new_j=j+moves[k][1];
    //          if(new_i<0 || new_j<0 || new_i>=matrix.size() || new_j>=matrix[0].size() || matrix[new_i][new_j]<=matrix[i][j]) continue;
    //          maxx=max(maxx, 1+solve(new_i,new_j,matrix));
    //      }
    //     return maxx;
    // }
    
    int moves[4][2]={{-1,0},{1,0},{0,-1},{0,1}}; vector<vector<int>> dp; 
    // For Memoization
    int solve(int i,int j,vector<vector<int>> &matrix){
        if(dp[i][j]) return dp[i][j];
        dp[i][j]=1;
         for(int k=0;k<4;k++){
             int new_i=i+moves[k][0], new_j=j+moves[k][1];
             if(new_i<0 || new_j<0 || new_i>=matrix.size() || new_j>=matrix[0].size() || matrix[new_i][new_j]<=matrix[i][j]) continue;
             dp[i][j]=max(dp[i][j], 1+solve(new_i,new_j,matrix));
         }
        return dp[i][j];
    }
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        // DFS(TLE) TC: O(N*M * 4^(N*M)), SC: O(N*M) / BFS / Topological sort 
        // int maxPath=1,n=matrix.size(),m=matrix[0].size();
        // for(int i=0;i<n;i++)
        //     for(int j=0;j<m;j++) maxPath=max(maxPath, solve(i,j,matrix));
        // return maxPath;
        
        
        // Memoization TC O(NM), SC: O(NM)
        int maxPath=0,n=matrix.size(),m=matrix[0].size();
        dp.resize(n,vector<int>(m));
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++) maxPath=max(maxPath, solve(i,j,matrix));
        return maxPath;
    }
};