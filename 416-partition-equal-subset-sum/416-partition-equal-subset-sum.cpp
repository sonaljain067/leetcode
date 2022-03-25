class Solution {
public:
    bool canPartition(vector<int>& nums) {
        //Using tabulation
        int sum=0, n=nums.size(); 
        for(int i=0;i<n;i++) sum+=nums[i];
        
        if(sum%2!=0) 
            return false;
        
        bool t[n+1][sum/2+1];
        for(int i=0;i<n+1;i++) t[i][0]=true;
        for(int j=0;j<sum/2+1;j++) t[0][j]=false;
        
        for(int i=1;i<n+1;i++){
            for(int j=1;j<sum/2+1;j++){
                if(nums[i-1]<=j)
                    t[i][j]=t[i-1][j] || t[i-1][j-nums[i-1]];
                else t[i][j]=t[i-1][j];
            }
        }
        return t[n][sum/2];
    }
};