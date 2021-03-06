class Solution {
public:
    // void helper(vector<int>&nums, vector<vector<int>>& ans, vector<int>&curr,int idx){
    //     ans.push_back(curr);
    //     for(int i=idx;i<nums.size();i++){
    //         if(i>idx && nums[i]==nums[i-1]) continue;
    //         curr.push_back(nums[i]);
    //         helper(nums,ans,curr,i+1);
    //         curr.pop_back();
    //     }
    // }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        //Way: Using Backtracking
        // vector<vector<int>> ans; vector<int> curr; 
        // sort(nums.begin(),nums.end());
        // helper(nums,ans,curr,0);
        // return ans;
        
        //Way: Non-recursive
        sort(nums.begin(),nums.end());
        vector<vector<int>> res={{}}; vector<int> curr; int size;
        for(auto num: nums) {
            size=res.size();
            for(int i=0;i<size;i++){
                curr=res[i];
                curr.push_back(num);
                if(find(res.begin(),res.end(),curr)==res.end()) res.push_back(curr);
            }
        }
        return res;
    }
};









