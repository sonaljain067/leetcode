class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        // Way1: Hashmap TC: O(n), SC: O(n)
        unordered_map<int,int> umap; int n=nums.size(),ans=INT_MAX;
        
        for(int i=0,prefix=0;i<n;i++){
            prefix+=nums[i];
            umap[prefix]=i+1;
            if(prefix==x) ans=min(ans,i+1);
        }
        
        for(int i=n-1,suffix=0;i>=0;i--){
            suffix+=nums[i];
            if(suffix==x) ans=min(ans,n-i);
            if(umap[x-suffix]>0 && i+1>umap[x-suffix])
                ans=min(ans,n-i+umap[x-suffix]);
        }
        
        return ans==INT_MAX ? -1 : ans;
        
        // Way2: Longest subarray 
    }
};


// can remove ele from front/last [i - from 0 or from nums.size()]
//  x 
// 