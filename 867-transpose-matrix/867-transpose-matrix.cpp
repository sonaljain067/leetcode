class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        vector<vector<int>>transpose(matrix[0].size());
        for(int i=0;i<matrix[0].size();i++){
            vector<int> row(matrix.size(),0);
            for(int j=0;j<matrix.size();j++)
                row[j]=matrix[j][i];
            transpose[i]=row;
        }
        return transpose;
    }
};