class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
        int n=arr.size(), mod=1e9+7,ans=0;
        unordered_map<int,int> umap;
        for(int i=0;i<n;i++){
            ans=(ans+umap[target-arr[i]])%mod;
            for(int j=0;j<i;j++) umap[arr[i]+arr[j]]++;
        }
        return ans;
    }
};