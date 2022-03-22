class Solution {
public:
    bool isSafe(vector<string> &arr, int row, int col, int n){
        //checking if col has queen before
        for (int i = 0; i != row; ++i)
            if (arr[i][col] == 'Q') return false;

        // checking upper diagonal on left side(or 45deg had a queen before)
        for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; --i, --j)
            if (arr[i][j] == 'Q') return false;

        // checking lower diagonal on left side(or 135deg had a queen before)
        for (int i = row - 1, j = col + 1; i >= 0 && j < n; --i, ++j)
            if (arr[i][j] == 'Q') return false;
        return true;
    }
    void nQueen(vector<vector<string>>&res, vector<string>&que,int row, int &n){
        if (row == n){
            res.push_back(que);
            return;
        }
        for (int col = 0; col!= n; ++col){
            if (isSafe(que, row, col, n)){
                que[row][col] = 'Q';
                nQueen(res, que, row + 1,n);
                que[row][col] = '.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> res; vector<string> que(n,string(n,'.'));
        nQueen(res, que, 0,n);
        return res;
    }
    int totalNQueens(int n) {
        vector<vector<string>> ans=solveNQueens(n); int count=0;
        return ans.size();
    }
};