class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        // Way1: Hashset TC: O(n), SC: O(n)
        int n=nums.size(),curSum=0,ans=0,l=0,r=0; unordered_set<int> st;
        while(r<n){
            while(st.find(nums[r])!=end(st))
                curSum-=nums[l], st.erase(nums[l++]);
            curSum+=nums[r],st.insert(nums[r++]);
            ans=max(ans,curSum);
        }
        return ans;
        
        // Way2: Using Pointers TC: O(n), SC: O(1)
        // int n=nums.size(),curSum=0,ans=0,l=0,r=0; vector<bool>freq(10001,false);
        // while(r<n){
        //     while(freq[nums[r]])
        //         curSum-=nums[l],freq[nums[l++]]=false;
        //     curSum+=nums[r],freq[nums[r++]]=true;
        //     ans=max(ans,curSum);
        // }
        // return ans;
    }
};