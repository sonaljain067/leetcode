class Solution {
public:
    class node{
      public:
        int val, freq;
        node(int val, int freq){
            this->val=val; this->freq=freq;
        }
        node(){}
    };
    class comparator{
        public: 
        bool operator()(node &s1, node &s2){
            return s1.freq<s2.freq;
        }
    };
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans; unordered_map<int,int> umap;
        priority_queue<node, vector<node>, comparator> pq;
        for(int i=0;i<nums.size();i++)
            umap[nums[i]]++;
        
        for(auto ele: umap)
            pq.push({ele.first, ele.second});
        
        while(ans.size()<k){
            node res=pq.top();
            ans.push_back(res.val);
            pq.pop();
        }
        for(auto ele: umap)
            cout<<ele.first<<" "<<ele.second<<"\n";
        return ans;
    }
};