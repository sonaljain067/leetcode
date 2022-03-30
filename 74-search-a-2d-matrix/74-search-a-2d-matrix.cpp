class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // Way1: Linear search
        // for(int i=0;i<matrix.size();i++){
        //     for(int j=0;j<matrix[0].size();j++){
        //         if(matrix[i][j]==target) return true;
        //     }
        // }
        // return false;
        
        //Way2: Binary Search(optimized search) 
        // TC: O(n), SC: O(1)
        int rows=matrix.size(), cols=matrix[0].size(),row=0,col=cols-1;
        while(row<rows && col>-1){
            int curr=matrix[row][col];
            if(curr==target)return true;
            if(curr<target) row++;
            else col--;
        }
        return false;
    }
};