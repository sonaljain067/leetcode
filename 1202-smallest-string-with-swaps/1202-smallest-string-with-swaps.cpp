class Solution {
public:
    vector<int> indices; vector<bool> vis; vector<vector<int>> adjList; string indStr;
    
    void dfs(string &s, int n){
        vis[n]=true;
        indices.push_back(n);
        indStr+=s[n];
        for(int &i: adjList[n])
            if(!vis[i])
                dfs(s,i);
    }
    
    string smallestStringWithSwaps(string s, vector<vector<int>>& pairs) {
        adjList.resize(s.length());
        vis.resize(s.length(),false);
        for(vector<int>&v: pairs)
            adjList[v[0]].push_back(v[1]),adjList[v[1]].push_back(v[0]);
        
        
        
        for(int i=1;i<s.length();i++){
            if(!vis[i]){
                indStr=""; indices.clear();
                dfs(s,i);
                sort(indStr.begin(),indStr.end());
                sort(indices.begin(),indices.end());
                for(int i=0;i<indices.size();i++)
                    s[indices[i]]=indStr[i];
            }
        }
        return s;
    }
};