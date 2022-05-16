class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        //Way1: Sorting TC: O(nlogn) SC: O(1)
        // if(nums.size()<=0) return 0;
        // sort(nums.begin(),nums.end());
        // int glob_longest=0, cur_longest=1;
        // for(int i=1;i<nums.size();i++){
        //     if(nums[i-1]==nums[i]) continue;
        //     if(nums[i-1]+1==nums[i]) cur_longest++;
        //     else glob_longest=max(glob_longest,cur_longest), cur_longest=1;
        // }
        // return max(glob_longest, cur_longest);
        
        //Way2: Vector 
        // if(nums.empty()) return 0;
        // sort(nums.begin(),nums.end()); 
        // vector<int> v; v.push_back(nums[0]); int ans=1; 
        // for(int i=1;i<nums.size();i++){
        //     if(nums[i]==v.back()) continue;
        //     if(nums[i]-1!=v.back()) {v.clear(); v.push_back(nums[i]); }
        //     else v.push_back(nums[i]);
        //     int num=v.size();
        //     ans=max(ans,num);
        // }
        // return ans;
        
        
        //Way3: Hashset TC: O(3n) ~ O(n), SC: O(n)
        // unordered_set<int> s(nums.begin(),nums.end()); int longest=0;
        // for(auto &num: s){
        //     if(s.count(num-1)) continue;
        //     int cur_longest=1; 
        //     while(s.count(num+cur_longest)) cur_longest++;
        //     longest=max(longest, cur_longest);
        // }
        // return longest;
        
        //Way4: Hashmap TC: O(n),SC: O(n)
        unordered_map<int,int> umap; int ans=0; 
        for(auto n: nums) umap[n++];
        for(auto n: nums){
            if(umap.find(n-1)!=umap.end()) continue;
            else{
                int size=1, curr=n+1; 
                while(umap.find(curr)!=umap.end()){ curr++; size++; }
                ans=max(ans,size);
            }
        }
        return ans;
    }
};