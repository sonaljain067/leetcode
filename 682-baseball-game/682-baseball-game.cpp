class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> st; int n=ops.size(); int ans=0;
        for(string i: ops){
            if(i=="C") st.pop();
            else if(i=="D") {
                int top=st.top();
                st.push(top*2);
            }
            else if(i=="+"){
                int firstT=st.top(); st.pop();
                int secT=st.top();
                st.push(firstT); st.push(firstT+secT);
            }
            else st.push(stoi(i));
        }
        while(st.size()!=0){
           ans+=st.top();
            st.pop();
        }
        return ans;
    }
};