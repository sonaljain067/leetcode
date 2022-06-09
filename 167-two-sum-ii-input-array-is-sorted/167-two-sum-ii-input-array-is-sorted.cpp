class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Way1: Brute force TC: O(n^2),O(1)
        // int n=nums.size();
        // for(int i=0;i<n-1;i++){
        //     for(int j=i+1;j<n;j++){
        //         if(nums[i]+nums[j]==target)
        //             return {i+1,j+1};
        //     }
        // }
        // return {-1,-1};
        
        
        //Way2: Unordered map TC: O(n),SC: O(n)
        unordered_map<int,int>umap; int n=nums.size();
        for(int i=0;i<n;i++){
            int diff=target-nums[i];
            if(umap.find(diff)!=umap.end()){
                return {umap[diff]+1,i+1};
            }
            umap[nums[i]]=i;
        }
        return {-1,-1};
        
        // Way3: Binary Search TC: O(n), SC: O(1)
        // int n=nums.size(),low=0,high=n-1;
        // while(low<=high){
        //     int sum=nums[low]+nums[high];
        //     if(sum==target) return { low+1, high+1 };
        //     else if(sum<target) low++;
        //     else high--;
        // }
        // return {-1,-1};
    }
};