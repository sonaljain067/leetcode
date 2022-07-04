class Solution {
public:
    int candy(vector<int>& ratings) {
        int n=ratings.size(),candy=n,i=1;
        while(i<n){
            if(ratings[i-1]==ratings[i]) {i++; continue;}
        
            // For increasing peaks
            int peak=0;
            while(ratings[i-1]<ratings[i]){
                peak++; candy+=peak; i++;
                if(i==n) return candy;
            }

            // For decreasing peaks
            int valley=0;
            while(i<n && ratings[i]<ratings[i-1]){
                valley++; candy+=valley; i++; 
            }
            candy-=min(peak,valley);
        }
        return candy;
    }
};