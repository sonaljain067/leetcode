class Solution {
public:
    bool next_permu(vector<int> &nums){
        int n=nums.size(),i,j;
        for(i=n-2;i>=0 && nums[i]>=nums[i+1];i--);
        if(i<0) return false;
        for(j=n-1;j>=0 && nums[j]<=nums[i];j--); 
        swap(nums[i],nums[j]);
        reverse(nums.begin()+i+1,nums.end());
        return true;
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        //Way1: Next permutation
        // set<vector<int>> st; vector<int> temp=nums; vector<vector<int>> ans;
        // do{
        //     next_permutation(temp.begin(),temp.end());
        //     st.insert(temp);
        // } while(temp!=nums);
        // for(auto it: st) ans.push_back(it);
        // return ans;
        
        //Way2: 
        int n=nums.size(); vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        ans.push_back(nums);
        while(next_permu(nums)) ans.push_back(nums);
        return ans;
    }
};