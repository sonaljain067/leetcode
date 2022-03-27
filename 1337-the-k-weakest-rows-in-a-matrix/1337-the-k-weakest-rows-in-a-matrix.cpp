class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        //Way1: Using Map
        map<int,int> omap; vector<int>ans,temp;
        int n=mat.size(),m=mat[0].size();
        for(int i=0;i<n;i++){
            int count=0;
            for(int j=0;j<m;j++)
                if(mat[i][j]==1) count++;
            omap[i]=count;
        }
        for(int i=0;i<=m;i++)
            for(auto it: omap){
                if(it.second==i)
                    temp.push_back(it.first);
            }
        
        for(int i=0;i<k;i++)
            ans.push_back(temp[i]);
        return ans;
    }
};