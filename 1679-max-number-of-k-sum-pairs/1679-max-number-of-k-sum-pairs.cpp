class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int n=nums.size(),ans=0; unordered_map<int,int> umap;
        
        for(int i=0;i<n;i++){
            if(umap[k-nums[i]]>0){
                ans++; umap[k-nums[i]]--;
            }
            else umap[nums[i]]++;
        }
        return ans;
    }
};