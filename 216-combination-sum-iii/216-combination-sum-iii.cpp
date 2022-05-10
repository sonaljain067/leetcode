class Solution {
public:
    vector<vector<int>> ans;
    void combinationSum(vector<int> temp,int target,int sum,int id,vector<vector<int>> &ans){ 
        // if(sum==target ){
        //     ans.push_back(temp); return;
        // }
        // if(temp.size()<k){
        //     for(int i=temp.empty() ? 1 : temp.back()+1; i<=9;i++){
        //         if()
        //     }
        // }
           
    }
    int sum(vector<int>&combine){
        int tar=0; 
        for(auto ele: combine)
            tar+=ele;
        return tar;
    }
    void combination(int k,int n,vector<int>& combine,int num){
        
        if(k==0){
            if(sum(combine)==n) ans.push_back(combine);
            return;
        }
        if(num>9) return;
        combine.push_back(num);
        combination(k-1,n,combine,num+1);
        combine.pop_back();
        combination(k,n,combine,num+1);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        // vector<vector<int>> ans; vector<int> temp;
        // vector<int> arr(n);
        // for(int i=0;i<n;i++) arr[i]=i+1;
        // combinationSum(temp,k,0,0,ans);
        // return ans;
        
        vector<int> combine;
        combination(k,n,combine,1);
        return ans;
        
    }
};