class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> vec;
        if(intervals.size()<=1) return intervals;
        sort(intervals.begin(),intervals.end());
        // vector<int> res=intervals[0];
        // for(auto it: intervals){
        //     if(it[0]<=res[1]) res[1]=max(it[1],res[1]);
        //     else{
        //         vec.push_back(res); res=it;
        //     }
        // }
        vec.push_back(intervals[0]);
        for(int i=1;i<intervals.size();i++){
            if(vec.back()[1]>=intervals[i][0])
                vec.back()[1]=max(vec.back()[1],intervals[i][1]);
            else vec.push_back(intervals[i]);
        }
        // vec.push_back(res);
        return vec;
    }
};
