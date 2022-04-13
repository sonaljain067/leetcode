class Solution {
public:
    unordered_map<string,bool> umap;
    bool isScramble(string s1, string s2) {
        int n=s1.size(), m=s2.size();
        if(n!=m ) return false;
        if(s1=="" && s2=="") return true; 
        if(s1.compare(s2)==0) return true;
        if(n<=1) return false;
        
        string temp=s1; s1.push_back(' ');temp.append(s2);
        if(umap.find(temp)!=umap.end()) return umap[temp];
        bool flag=false;
        for(int i=1;i<=n-1;i++)
            if((isScramble(s1.substr(0,i),s2.substr(n-i,i))==true  && isScramble(s1.substr(i,n-i),s2.substr(0,n-i))==true) || 
               (isScramble(s1.substr(0,i),s2.substr(0,i))==true && isScramble(s1.substr(i,n-i),s2.substr(i,n-i))==true)){
                flag=true; break;
            }
        return umap[temp]=flag;
    }
};