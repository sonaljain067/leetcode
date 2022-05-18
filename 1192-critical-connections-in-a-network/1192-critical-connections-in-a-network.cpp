class Solution {
public:
    vector<vector<int>> adj, bridge; vector<bool> vis; vector<int> disc,low;
    void dfs(int u, int parent){
        static int tim=1,child=0; disc[u]=low[u]=tim++; vis[u]=true;
        for(auto ele: adj[u]){
            if(!vis[ele]){
                child++; dfs(ele,u);
                low[u]=min(low[u],low[ele]);
                if(disc[u]<low[ele]){
                    vector<int> temp; temp.push_back(u); temp.push_back(ele);
                    bridge.push_back(temp);
                }
            }
            else if(ele!=parent) low[u]=min(low[u],disc[ele]);
        }
    }
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
        //DFS
        adj.resize(n);
        for(int i=0;i<connections.size();i++){
            adj[connections[i][0]].push_back(connections[i][1]);
            adj[connections[i][1]].push_back(connections[i][0]);
        }
        vis.resize(n,false); disc.resize(n,INT_MAX); low.resize(n,INT_MAX);
        for(int i=0;i<n;i++){
            if(!vis[i]) dfs(i,-1);
        }
        return bridge;
    }
};