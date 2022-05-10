class Solution {
public:
    vector<vector<int>> ans;
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
        combine.push_back(num); //Including num in combine
        combination(k-1,n,combine,num+1); // 
        combine.pop_back(); // Not including num in combine
        combination(k,n,combine,num+1);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> combine;
        combination(k,n,combine,1);
        return ans;
        
    }
};