class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int n=grid.size(), m=grid[0].size(); vector<vector<int>> vec(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int newI=(i+(j+k)/m)%n, newJ=(j+k)%m;
                vec[newI][newJ]=grid[i][j];
            }
        }
        return vec;
    }
};