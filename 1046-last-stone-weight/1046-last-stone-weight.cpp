class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
     priority_queue<int> pq;
     for(int ele: stones)
        pq.push(ele);
        
    while(pq.size()>1){
        int first=pq.top(); pq.pop();
        int second=pq.top(); pq.pop();
        
        if(first==second) continue;
        else if(first!=second)
            pq.push(abs(second-first));
    }
    if(pq.size()==1) 
        return pq.top();
    else return 0; 
    }
};