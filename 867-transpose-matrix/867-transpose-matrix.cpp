class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int r=matrix.size(), n=matrix[0].size(),newR=n, newC=r;
        vector<vector<int>> transpose(newR);
        for(int i=0;i<newR;i++){
            vector<int> row(newC,0);
            for(int j=0;j<newC;j++) row[j]=matrix[j][i];
            transpose[i]=row;
        }
        return transpose;
    }
};