class Solution {
public:
    int findMaxForm(vector<string>& strs, int m, int n) {
        vector<vector<int>> vec(m+1,vector<int>(n+1,0));
        int numZero, numOne;
        for(auto &s: strs){
            numZero=numOne=0;
            for(auto c: s) {
                if(c=='0') numZero++;
                else if(c=='1') numOne++;
            }
            for(int i=m;i>=numZero;i--){
                for(int j=n;j>=numOne;j--){
                    vec[i][j]=max(vec[i][j],vec[i-numZero][j-numOne]+1);
                }   
            }
        }
        
        return vec[m][n];
        
    }
};