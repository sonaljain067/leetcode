class Solution {
public:
    void dfs(string start,string end,map<string,double>&mp,map<string,vector<string>>&graph,double&val,map<string,int>&vis,bool &found){
        vis[start]=1;
        if(found==true) return;
        for(auto child: graph[start]){
            if(vis[child]!=1){
                val*=mp[start+"->"+child];
                if(end==child){
                    found=true; return;
                }
                dfs(child,end,mp,graph,val,vis,found);
                if(found==true) return;
                else val/=mp[start+"->"+child];
            }
        }
    }
    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
        vector<double>ans; map<string,double> mp; map<string,vector<string>> graph;
        for(int i=0;i<equations.size();i++){
            string u=equations[i][0],v=equations[i][1];
            mp[u+"->"+v]=values[i];
            mp[v+"->"+u]=1/values[i];
            graph[u].push_back(v); graph[v].push_back(u);
        }
        for(int i=0;i<queries.size();i++){
            string start=queries[i][0],end=queries[i][1];
            if(graph.find(start)==graph.end() || graph.find(end)==graph.end())
                ans.push_back(-1);
            else{
                double val=1; map<string,int> vis; bool found=false;
                if(start==end) found=true;
                else dfs(start,end,mp,graph,val,vis,found);
                if(found==true) ans.push_back(val);
                else ans.push_back(-1);
                
            }
        }
        return ans;
    }
};