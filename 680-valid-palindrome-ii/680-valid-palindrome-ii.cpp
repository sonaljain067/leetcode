class Solution {
public:
    bool validPalindrome(string s) {
        int n=s.length(); int high=n-1,low=0,cnt=0;
        while(low<high){
            if(s[low]==s[high])
                { low++; high--; }
            else { cnt++; low++; }
            if(cnt>1) break;
        }
        
        //Reinitialize the pointer
        high=n-1,low=0; int cnt1=0;
        while(low<high){
            if(s[low]==s[high])
                { low++; high--; }
            else { cnt1++; high--; }
            if(cnt1>1) break;
        }
        
        if(cnt==0 || cnt1==0) return true;
        if(cnt==1 || cnt1==1) return true;
        return false;
    }
};