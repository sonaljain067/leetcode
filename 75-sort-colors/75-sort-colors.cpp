class Solution {
public:
    void sortColors(vector<int>& nums) {
        //Way1: Using built-in function
        // sort(nums.begin(),nums.end());
        //Way2: Two pointers, making sure low has 0, mid has 1, high with 2 and if not exist then swapping accordingly
        int high=nums.size()-1,low=0,mid=0;
        while(mid<=high){
            if(nums[mid]==0){
                int temp=nums[low];
                nums[low]=nums[mid];
                nums[mid]=temp;
                low++; mid++;
            }
            else if(nums[mid]==1) mid++;
            else if(nums[mid]==2){
                int temp=nums[high];
                nums[high]=nums[mid];
                nums[mid]=temp;
                high--; 
            }
        }
    }
};