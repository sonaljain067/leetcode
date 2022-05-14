class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        //Way: BFS -> TLE
        // vector<pair<int,int>> adj[n+1];
        // for(int i=0;i<times.size();i++) adj[times[i][0]].push_back({times[i][1],times[i][2]});
        // vector<int> dist(n+1,INT_MAX); queue<int> q; q.push(k); dist[k]=0; int res=0;
        // while(!q.empty()){
        //     int t=q.front(); q.pop();
        //     for(pair<int,int> it: adj[t]){
        //         if(dist[it.first]>dist[t]+it.second){
        //             dist[it.first]=dist[t]+it.second; q.push(it.first);
        //         }
        //     }
        // }
        // for(int i=1;i<=n;i++){
        //     if(dist[i]==INT_MAX) return -1;
        //     res=max(res,dist[i]);
        // }
        // return res;
        
        //Way: Bellman Ford -> TLE
//         vector<int> dist(n+1,INT_MAX); dist[k]=0; int res=0;
//         for(int i=0;i<n-1;i++){
//             bool flag=true; 
//             for(auto node: times){
//                 int src=node[0],des=node[1],time=node[2];
//                 if(dist[src]!=INT_MAX && dist[des]>dist[src]+time){
//                     dist[des]=dist[src]+time; flag=true;
//                 }
//             }
//             if(flag==false) break;
//         }
        
//         for(int i=1;i<=n;i++){
//             if(dist[i]==INT_MAX) return -1;
//             res=max(res,dist[i]);
//         }
//         return res;
        
        //Way: Dijkstra
        vector<pair<int,int>> adj[n+1]; 
        for(int i=0;i<times.size();i++) adj[times[i][0]].push_back({times[i][1],times[i][2]});
        vector<int> dist(n+1,INT_MAX); 
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        pq.push({0,k}); dist[k]=0; int res=0;
        while(!pq.empty()){
            pair<int,int> t=pq.top(); pq.pop();
            for(pair<int,int> it: adj[t.second]){
                if(dist[it.first]>t.first+it.second){
                    dist[it.first]=t.first+it.second; pq.push({dist[it.first],it.first});
                }
            }
        }
        for(int i=1;i<=n;i++) {
            if(dist[i]==INT_MAX) return -1;
            res=max(res,dist[i]);
        }
        return res;
    }
};