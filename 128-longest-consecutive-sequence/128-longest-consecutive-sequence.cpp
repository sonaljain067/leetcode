class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        //Way: Sorting TC: O(nlogn) SC: O(1)
        // if(nums.size()<=0) return 0;
        // sort(nums.begin(),nums.end());
        // int glob_longest=0, cur_longest=1;
        // for(int i=1;i<nums.size();i++){
        //     if(nums[i-1]==nums[i]) continue;
        //     if(nums[i-1]+1==nums[i]) cur_longest++;
        //     else glob_longest=max(glob_longest,cur_longest), cur_longest=1;
        // }
        // return max(glob_longest, cur_longest);
        
        
        //Way: Hashset TC: O(n) SC: O(n)
        unordered_set<int> s(nums.begin(),nums.end()); int longest=0;
        for(auto &num: s){
            if(s.count(num-1)) continue;
            int cur_longest=1; 
            while(s.count(num+cur_longest)) cur_longest++;
            longest=max(longest, cur_longest);
        }
        return longest;
    }
};