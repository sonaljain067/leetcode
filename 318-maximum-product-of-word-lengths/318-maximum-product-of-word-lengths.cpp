class Solution {
public:
    //Way1
    // int find(string str1, string str2){
    //     int n1=str1.length(), n2=str2.length(); vector<bool> count(26,0);
    //     for(int i=0;i<n1;i++) count[str1[i]-'a']=true;
    //     for(int i=0;i<n2;i++) 
    //         if(count[str2[i]-'a']==true) return 0;
    //     return n1*n2;
    // }
    int maxProduct(vector<string>& words) {
        //Way1: Brute force approach TC: O(n^2), SC: O(1)-> TLE
        // int n=words.size(),ans=0;
        // for(int i=0;i<n;i++)
        //     for(int j=i+1;j<n;j++)
        //         ans=max(ans,find(words[i],words[j]));
        // return ans;
        
        //Way2: Bit manipulation TC: O(n), SC: O(1)
        int maxLen=0,n=words.size(); vector<int> vec(n);
        for(int i=0;i<n;i++)
            for(auto c: words[i]) vec[i]=vec[i] | (1<<(c-'a'));
        
        for(int i=0;i<n;i++)
            for(int j=i+1;j<n;j++)
                if((vec[i] & vec[j]) == 0 && words[i].size()*words[j].size()>maxLen)
                    maxLen=max(maxLen, (int)(words[i].size()*words[j].size()));
        return maxLen;
        
    }
};