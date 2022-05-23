class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        //Way: Brute force TC: O(n^3), SC:O(1) -> TLE
        // int n=nums.size(); set<vector<int>> s; 
        // if(n==0 || n<3) return {};
        // sort(nums.begin(),nums.end());
        // for(int i=0;i<n-2;i++){
        //     for(int j=i+1;j<n-1;j++){
        //         for(int k=j+1;k<n;k++){
        //             if(nums[i]+nums[j]+nums[k]==0) s.insert({nums[i],nums[j],nums[k]});
        //         }
        //     }
        // }
        // vector<vector<int>> ans(s.begin(),s.end());
        // return ans;
        
        
        // Way: Two pointers/Vector TC: O(n^2), SC: O(1)
        vector<vector<int>> ans; int n=nums.size();
        sort(nums.begin(),nums.end()); if(n<3 || n==0 || nums[0]>0) return {};
        for(int i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            int left=i+1, right=n-1;
            while(left<right){ 
                int sum=nums[i]+nums[left]+nums[right];
                if(sum==0) { 
                   ans.push_back({nums[i],nums[left],nums[right]});
                    while(left<right && nums[left]==nums[left+1]) left++;
                    while(left<right && nums[right]==nums[right-1]) right--; 
                    left++; right--; 
                }
                else if(sum<0) left++; else right--;
            } 
        }
        return ans;
        
        // Way: Hashmap TC:O(n), SC: O(n)
        // sort(nums.begin(),nums.end()); int n=nums.size();
        // if(n<3 || n==0 || nums[0]>0) return {};
        // unordered_map<int,int> mp; vector<vector<int>> ans;
        // for(int i=0;i<n;i++) mp[nums[i]]=i;
        // for(int i=0;i<n-2;i++){
        //     if(nums[i]>0) break;
        //     for(int j=i+1;j<n-1;j++){
        //         int req=-1*(nums[i]+nums[j]);
        //         if(mp.count(req) && mp.find(req)->second > j) ans.push_back({nums[i],nums[j],req});
        //         j=mp.find(nums[j])->second;
        //     }
        //     i=mp.find(nums[i])->second;
        // }
        // return ans;
        
    }
};




