
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        //Way1: Using vector
        
        int n=nums.size(); vector<int> d(n,0);
        for(int i=0;i<n;i++) d[nums[i]]++;
        for(int i=0;i<n;i++) if(d[i]>1) return i;
        return 0;
        
        //Way2: Using Two pointers
        // int n=nums.size();
        // int low=1, high=n-1;
        // while(low<high){
        //     int mid=(high+low)/2;
        //     int count=0;
        //     for(auto ele: nums)
        //         if(ele<=mid) count++;
        //     if(count>mid) high=mid;
        //     else low=mid+1;
        // }
        // return low;
        
        //Way3: Bit manipulation
        // int n=nums.size(),ans=0;
        // for(int i=0;i<n;i++){
        //     ans^=nums[i];
        // }
        // for(int i=0;i<n;i++){
        //     ans^=i;
        // }
        // return ans;
    }
};