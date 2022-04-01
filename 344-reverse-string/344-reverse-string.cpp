class Solution {
public:
    void reverseString(vector<char>& s,int x=-2,int y=-1) {
        // Way1: Through recursion  Time Complexity : O(n)
        if(y-x<=0) return;
        if(x==-2) x=0;
        if(y==-1) y=s.size()-1;
        
        reverseString(s,x+1,y-1);
        int temp=s[x];
        s[x]=s[y];
        s[y]=temp;
        
        //Way2: Through variables   Time Complexity : O(n)
        // int high=s.length()-1, low=0;
        // while(high>=low){
        //     int temp=s[high];
        //     s[high]=s[low];
        //     s[low]=temp;
        //     high--; low++;
        // }
    }
};