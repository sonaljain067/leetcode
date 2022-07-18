class Solution {
public:
    int result=0, target; unordered_map<int,int> umap;
    void get_result(vector<int> &nums){
        int sum=0; 
        umap.clear(); umap[0]++;
        for(int &i: nums){
            sum+=i; 
            result+=umap[sum-target];
            umap[sum]++;
        }
    }
    int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {
        this->target=target;
        vector<int> row(matrix[0].size(),0);
        
        for(int i=0;i<matrix.size();i++){
            fill(row.begin(),row.end(),0);
            for(int j=i;j<matrix.size();j++){
                for(int k=0;k<matrix[0].size();k++)
                    row[k]+=matrix[j][k];
                get_result(row);
            }
        }
        return result;
    }
};