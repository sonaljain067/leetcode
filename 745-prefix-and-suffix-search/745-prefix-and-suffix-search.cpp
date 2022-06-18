class WordFilter {
public:
    // TC: O(N*W^2), SC: O(N*W^2)
    unordered_map<string,int> umap;
    
    WordFilter(vector<string>& words) {
        int n=words.size();
        for(int i=0;i<n;i++){
            string word=words[i]; int wordsize=word.size();
            for(int j=1;j<=wordsize;j++){
                string pre=word.substr(0,j);
                for(int k=0;k<wordsize;k++){
                    string stuff=word.substr(k,wordsize);
                    umap[pre+" | "+stuff]=i+1;
                }
            }
        }
    }
    
    int f(string prefix, string suffix) {
        string s=prefix+" | "+suffix;
        return umap[s]-1;
    }
};

/**
 * Your WordFilter object will be instantiated and called as such:
 * WordFilter* obj = new WordFilter(words);
 * int param_1 = obj->f(prefix,suffix);
 */