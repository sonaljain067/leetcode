class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        //Way1: like-DP TC: O(n), SC: O(1)
        // for(int i=1;i<nums.size();i++)
        //     nums[i]==0 ? nums[i]=0 : nums[i]+=nums[i-1];
        //     return *max_element(nums.begin(),nums.end());
        
        // Way2: like-Greedy TC: O(n), SC: O(1) [finding occ of 1]
        // int ones=0, mx=0;
        // for(auto num: nums){
        //     if(num==0) ones=0;
        //     else ones++;
        // }
        // return max(mx,ones);
        
        //Way2.1: like-Greedy TC: O(n), SC: O(1) [finding occ of 0 and subtracting]
        int pos=0, mx=0,n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==0) { mx=max(mx,i-pos); pos=i+1; }
        }
        return max(mx,n-pos);
    }
};