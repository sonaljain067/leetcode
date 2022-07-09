class Solution {
public:
    // int findResult(vector<int>&nums, int k, int i){
    //     if(i>=nums.size()-1) return nums.back();
    //     int score=INT_MIN;
    //     for(int j=1;j<=k;j++)
    //         score=max(score,nums[i]+findResult(nums,k,i+j));
    //     return score;
    // }
    int maxResult(vector<int>& nums, int k) {
        // Way1: Brute Force -> TLE TC: O(k^N), SC: O(N)
        // int i=0;
        // return findResult(nums,k,i);
        
        // Way2: DP Memoization -> TLE
        // Way3: DP Iterative -> TLE
        // Way4: Optimized DP TC: O(Nlogk), SC: O(N)
        vector<int> dp(nums.size(), INT_MIN);
        multiset<int> s={{dp[0]=nums[0]}};
        
        for(int i=1;i<nums.size();i++){
            if(k<i) s.erase(s.find(dp[i-k-1]));
            s.insert(dp[i]=*rbegin(s)+nums[i]);
        }
        return dp.back();
    }
};