class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        //Way1: Hashset TC: O(nlogn), SC: O(n)
        // int n=nums.size(),i=0; set<int> st;
        // for(int i=0;i<n;i++) st.insert(nums[i]);
        // int ans=st.size();
        // for(auto x: st) nums[i++]=x;
        // return ans;
        
        //Way2: Hashmap TC: O(nlogn), SC: O(n)
        // vector<int> ans; map<int,int> mp; int n=nums.size();
        // for(int i=0;i<n;i++){
        //     if(mp[nums[i]]==0) ans.push_back(nums[i]);
        //     mp[nums[i]]++;
        // }
        // nums=ans;
        // return ans.size();
        
        // Way3.1: Two pointer TC: O(n), SC O(1)
        // int n=nums.size(),left=1;; if(n==0) return 0;
        // for(int right=1; right<n;right++){
        //     if(nums[left-1]!=nums[right]) nums[left++]=nums[right];
        // }
        // return left;
        
        // Way3.2: Two pointer TC: O(n), SC O(1)
        int n=nums.size(),i=1,j=1; if(n<=1) return n;
        while(j<n){
            if(nums[j-1]==nums[j]) j++;
            else nums[i++]=nums[j++];
        }
        return i;
        
        
        //Way4: STL function
        // nums.erase(unique(nums.begin(),nums.end()),nums.end());
        // return nums.size();
        
    }
};