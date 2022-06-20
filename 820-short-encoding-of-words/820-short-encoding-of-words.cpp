class Solution {
public:
    static bool compare(string &first, string &second){
        return first.size()>second.size();
    }
    int minimumLengthEncoding(vector<string>& words) {
        unordered_map<string,int>umap; int ans=0,n=words.size();
        sort(words.begin(),words.end(),compare);
        
        for(int i=0;i<n;i++) umap[words[i]]++;
        for(int i=0;i<n;i++){
            int k=words[i].size();
            if(umap[words[i]]>0) ans+=(k+1);
            for(int j=k-1;j>=0;j--){
                string s=words[i].substr(j,k-j);
                umap[s]=0;
            }
        }
        
        return ans;
    }
};