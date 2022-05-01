class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int a=0,b=0;
        for(int i=0;i<s.size();i++){
            if(s[i]!='#'){
                s[a]=s[i]; a++;
            }
            else {
                a--; a=max(0,a); 
            }
        }
        for(int i=0;i<t.size();i++){
            if(t[i]!='#'){
                t[b]=t[i];b++;
            }
            else {
                b--; b=max(0,b);
            }
        }
        if(a!=b) return false; 
        else {
            for(int i=0;i<a;i++)
                if(s[i]!=t[i]) return false;
            return true;
        }
    }
};