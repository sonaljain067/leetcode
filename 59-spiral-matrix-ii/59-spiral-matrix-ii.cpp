class Solution {
public:
    // TC: O(n^2),SC: O(1)
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> vec(n,vector<int>(n,0));
        int sr=0, sc=0,er=n-1,ec=n-1,val=0;
        while(sr<=er && sc<=ec){
            for(int i=sc;i<=ec;++i)
                vec[sr][i]=++val;
            for(int i=sr+1;i<=er;++i)
                vec[i][ec]=++val;
            
            for(int i=ec-1;i>sc;--i)
                vec[er][i]=++val;
            for(int i=er;i>sr;--i)
                vec[i][sc]=++val;
            ++sr; --er; ++sc; --ec;
        }
        return vec;
    }
};