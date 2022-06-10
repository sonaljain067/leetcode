class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        //Way: Hashmap TC: O(n), SC: O(n)
//         int count=0,max_len=0; unordered_map<char,int> uniqueDigit;
//         for(int i=0;i<s.size();i++){
//             uniqueDigit[s[i]]+=1;
//             if(uniqueDigit[s[i]]>1){
//                 while(uniqueDigit[s[i]]>1)
//                     uniqueDigit[s[count++]]--;
//             }
//             int curr_len=i-count+1;
//             max_len=max(max_len,curr_len);
//         }
//         return max_len;
        
        //Way: Vector TC: O(n), SC: O(1)
        // vector<int> vec(256,-1); int maxLen=0, start=-1;
        // for(int i=0; i!=s.length(); i++){
        //     if(vec[s[i]] > start) start=vec[s[i]];
        //     vec[s[i]]=i;
        //     maxLen=max(maxLen,i-start);
        // }
        // return maxLen;
        
        //Way: Sliding Window TC: O(2n), SC: O(m)
        vector<int> vec(256,0); int l=0,r=0,ans=0;
        while(r<s.length()){
            vec[s[r]]++;
            while(vec[s[r]]>1) { vec[s[l]]--; l++;}
            ans=max(ans,r-l+1); r++;
        }
        return ans;
    }
};