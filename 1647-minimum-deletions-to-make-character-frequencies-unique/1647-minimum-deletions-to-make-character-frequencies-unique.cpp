class Solution {
public:
    int minDeletions(string s) {
        unordered_map<int,int>umap; unordered_map<int,int> uniqmp; int count=0;
        for(int i=0;i<s.length();i++) umap[s[i]-'a']++;
        
        for(auto i: umap){
            int temp=i.second;
            if(uniqmp[temp]!=0){
                while(temp>0 && uniqmp[temp]!=0) temp--, count++;
            }
            if(temp>0) uniqmp[temp]++;
        }
        return count;
    }
};