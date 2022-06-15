class Solution {
public:
    bool ischain(string s,string l){
        if(l.length()-s.length()!=1) return false;
        bool f=true; int i=0,j=0;
        while(i<s.length() && j<l.length()){
            if(s[i]==l[j]) i++,j++;
            else {
                if(f) j++, f=false; else return false;
            }
            
        }
        return true;
    }
    int longestStrChain(vector<string>& words) {
        vector<int> v(words.size(),1);
        for(int i=0;i<words.size();i++){
            for(int j=0;j<words.size()-i-1;j++){
                if((words[j].length()) > (words[j+1].length()))
                    swap(words[j],words[j+1]);
            }
        }
        int ans=0;
        for(int i=0;i<words.size();i++){
            for(int j=i-1;j>=0;j--){
                if(words[i].length()-words[j].length()==1 && ischain(words[j],words[i]))
                    v[i]=max(v[i],1+v[j]);
                if(words[i].size()-words[j].size()>1) break;
            }
           ans=max(ans,v[i]); 
        }
        return ans;
    }
};