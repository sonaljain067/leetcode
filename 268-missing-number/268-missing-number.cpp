class Solution {
public:
    int missingNumber(vector<int>& nums) {
        //Way1: XOR TC: O(n), SC: O(1)
        int n=nums.size(),xorM=n;
        for(int i=0;i<n;i++) {
            xorM^=i;  xorM^=nums[i]; 
        } 
        return xorM;
        
        //Way2: Sum TC: O(n), SC: O(1)
        // int n=nums.size(), sum=n*(n+1)/2;
        // for(int i=0;i<n;i++) sum-=nums[i];
        // return sum;
    
    }
};