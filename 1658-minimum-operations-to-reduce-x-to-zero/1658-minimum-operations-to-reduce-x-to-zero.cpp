class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        // Way1: Hashmap TC: O(n), SC: O(n)
//         unordered_map<int,int> umap; int n=nums.size(),ans=INT_MAX;
        
//         for(int i=0,prefix=0;i<n;i++){
//             prefix+=nums[i];
//             umap[prefix]=i+1;
//             if(prefix==x) ans=min(ans,i+1);
//         }
        
//         for(int i=n-1,suffix=0;i>=0;i--){
//             suffix+=nums[i];
//             if(suffix==x) ans=min(ans,n-i);
//             if(umap[x-suffix]>0 && i+1>umap[x-suffix])
//                 ans=min(ans,n-i+umap[x-suffix]);
//         }
        
//         return ans==INT_MAX ? -1 : ans;
        
        // Way2: Longest subarray CT: O(n), SC: O(1)
        int sum=accumulate(nums.begin(),nums.end(),0);
        if(sum<x) return -1;
        if(sum==x) return nums.size();
        int target=sum-x,curSum=0,start=0,maxSize=0,n=nums.size();
        for(int i=0;i<n;i++){
            curSum+=nums[i];
            while(curSum>target) curSum-=nums[start++];
            if(curSum==target) maxSize=max(maxSize,i-start+1);
        }
        return (maxSize==0) ? -1 : n-maxSize;
    }
};


// can remove ele from front/last [i - from 0 or from nums.size()]
//  x 
// 