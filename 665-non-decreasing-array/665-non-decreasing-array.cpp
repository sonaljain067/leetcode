class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        // TC: O(n), SC: O(1)
        int cnt=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]<nums[i-1]) {
                if(++cnt>1) return false;
                if(i==1 || nums[i-2]<=nums[i]) nums[i-1]=nums[i];
                else nums[i]=nums[i-1];
            }
        }
        return true;
    }
};