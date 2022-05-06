class Solution {
public:
    string removeDuplicates(string s, int k) {
        //Way1: Using two stacks(Master & Helper)
//         stack<char> master; string ans;
//         for(char ch: s){
//             stack<char> helper;
//             helper.push(ch);
            
//             while(!master.empty() && master.top()==ch){
//                 helper.push(master.top()); master.pop();
//             }
//             if(helper.size()!=k){
//                 while(!helper.empty()) master.push(helper.top()); helper.pop();
//             }
//         }
//         while(!master.empty()){
//             ans+=master.top(); master.pop();
//         }
//         return ans;
        
        //Way2: Using stack and frequency count of ele
        int n=s.length(); vector<int> freq(n,1); stack<int> st; 
        string ans;
        
        st.push(0);
        for(int i=1;i<n;i++){
            if(!st.empty())
                if(s[st.top()]==s[i]) freq[i]=freq[st.top()]+1;
            
            st.push(i);
            
            if(freq[st.top()]==k)
                for(int i=0;i<k;i++) st.pop();
        }
            
        
        while(!st.empty()){
            ans+=s[st.top()]; st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }   
};