class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // Way1.1: Two pointer TC: O(n), SC O(1)
        // int ans=1, n=nums.size();
        // if(n==0) return 0;
        // for(int i=1;i<n;i++)
        //     if(nums[i-1]!=nums[i]) nums[ans++]=nums[i];    
        // return ans;
        // or 
        // Way1.2: Two pointer TC: O(n), SC O(1)
        // int n=nums.size(),left=1;; if(n==0) return 0;
        // for(int right=1; right<n;right++){
        //     if(nums[left-1]!=nums[right]) nums[left++]=nums[right];
        // }
        // return left;
        
        //Way: Hashset TC: O(n), SC: O(n)
        int n=nums.size(),i=0; set<int> st;
        for(int i=0;i<n;i++) st.insert(nums[i]);
        int ans=st.size();
        for(auto x: st) nums[i++]=x;
        return ans;
    }
};