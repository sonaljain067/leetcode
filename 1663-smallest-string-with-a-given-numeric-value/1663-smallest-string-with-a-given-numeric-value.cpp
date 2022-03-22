class Solution {
public:
    string getSmallestString(int n, int k) {
        //Way1 : Greedy approach [Initialize arr, look for which val is minimum(greedy) and then update ans&k with min value]
        string ans(n,'a');
        k-=n;
        while(k>0){
            ans[--n]+=min(25,k);
            k-=min(25,k);
        }
        return ans;
    }
};