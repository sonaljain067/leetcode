class Solution {
public:
    int maxArea(vector<int>& height) {
        int low=0, high=height.size()-1,maxWater=0,n=height.size();
        for(int i=0;i<n;i++){
            maxWater = max(maxWater, min(height[low],height[high])*(high-low));
            if(height[low] > height[high]) high--;
            else low++;
        }
        return maxWater;
    }
};