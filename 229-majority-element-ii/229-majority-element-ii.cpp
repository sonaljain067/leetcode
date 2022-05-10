class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        // Way1: Using map TC: O(n), SC: O(n)
        unordered_map<int,int> umap; int n=nums.size(); vector<int> ans;
        for(int i=0;i<nums.size();i++)
            umap[nums[i]]++;
        for(auto ele: umap){
            if(ele.second>n/3) ans.push_back(ele.first);
        }
        return ans;

        
        // Way2: Moore voting algo TC: O(n), SC: O(1)
        // int n1=-1,n2=-1, c1=0,c2=0, n=nums.size();
        // for(auto num: nums){
        //     if(n1==num) c1++; 
        //     else if(n2==num) c2++;
        //     else if(c1==0) {n1=num; c1++;}
        //     else if(c2==0) {n2=num; c2++;}
        //     else c1--, c2--;
        // }
        // c1=0,c2=0;
        // for(auto num: nums){
        //     if(num==n1) c1++; else if(num==n2) c2++;
        // }
        // vector<int> ans;
        // if(c1>n/3) ans.push_back(n1);
        // if(c2>n/3) ans.push_back(n2);
        // return ans;
    }
};