class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        //Using BFS
        int n=graph.size(); vector<int> color(n); queue<int> q;
        // 0: uncolored, 1: color A, -1: color B
        
        for(int i=0;i<n;i++){
            if(color[i]) continue;
            color[i]=1;
            for(q.push(i); !q.empty(); q.pop()){
                int cur=q.front();
                for(int neigh: graph[cur]){
                    if(!color[neigh]){
                        color[neigh]=-color[cur]; q.push(neigh);
                    }
                    else if(color[neigh]==color[cur]) return false;
                }
            }
        }
        return true;
    }
};