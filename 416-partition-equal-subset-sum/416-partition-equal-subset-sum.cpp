class Solution {
public:
        //Using Recursion
//     bool PartitionRecursion(vector<int> &nums, int n, int s){
//         if(n==0) return 0;
//         if(s==0) return 1;

//         if(nums[n-1]<=s)
//             return PartitionRecursion(nums,n-1,s-nums[n-1]) || PartitionRecursion(nums,n-1,s);
//         else return PartitionRecursion(nums,n-1,s);
//     }
    
        // Using Memoization
    // bool PartitionMemoization(vector<int> &nums, int n, int s){
    //     if(n==0) return 0;
    //     if(s==0) return 1;
    //     bool dp[n+1][s+1]; 
    //     if(dp[n][s]!=-1) return dp[n][s];
    //     if(nums[n-1]<=s)
    //         return dp[n][s]=PartitionMemoization(nums,n-1,s-nums[n-1]) || PartitionMemoization(nums,n-1,s);
    //     else return PartitionMemoization(nums,n-1,s);
    // }
    
    bool canPartition(vector<int>& nums) {
        //Using tabulation
        int sum=0, n=nums.size(); 
        for(int i=0;i<n;i++) sum+=nums[i];
        
        if(sum%2!=0) 
            return false;
        // return PartitionRecursion(nums,n,sum/2);
        // return PartitionMemoization(nums,n,sum/2);
        // Using Tabulation
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