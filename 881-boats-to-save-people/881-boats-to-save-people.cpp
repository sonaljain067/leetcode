class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int i=0,j=people.size()-1,cnt=0;
        while(i<=j){
            //lighest and heaviest person sum <= limit
            if(people[i]+people[j]<=limit){
                ++i; --j;
            }
            //if sum is beyond limit, heaviest person will go alone
            else --j;
            cnt++;
        }
        return cnt;
    }
};