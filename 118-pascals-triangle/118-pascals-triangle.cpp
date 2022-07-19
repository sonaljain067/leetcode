class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        // Same TC but diff SC
        //Way1
        // vector<vector<int>>output;
        // for(int i=0;i<numRows;i++){
        //     vector<int> ans(i+1,1);
        //     for(int j=1;j<i;j++)
        //         ans[j]=output[i-1][j]+output[i-1][j-1];
        //     output.push_back(ans);
        // }
        // return output;
        
        //Way2
        vector<vector<int>> vec(numRows,vector<int>(numRows,0));
        for(int i=0;i<numRows;i++){
            vec[i].resize(i+1);
            vec[i][0]=vec[i][i]=1;
            for(int j=1;j<=i;j++) 
                vec[i][j]=vec[i-1][j]+vec[i-1][j-1];
        }
        return vec;
    }
};