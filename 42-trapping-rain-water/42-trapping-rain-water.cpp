class Solution {
public:
    int trap(vector<int>& height) {
        // Way: Two arrays TC: O(n), SC: O(n)
//         int ans=0,val=0,n=height.size(); vector<int> left(n,0), right(n,0); 

//         for(int i=1;i<n;i++) left[i]=max(left[i-1],height[i-1]);
//         for(int i=n-2;i>0;i--) right[i]=max(right[i+1],height[i+1]);
//         for(int i=0;i<n;i++){
//             val=min(left[i],right[i])-height[i]; if(val>0) ans+=val;
//         }
//         return ans;
        
        
        // Way: Stack TC: O(n), SC: O(n)
        // int water=0, n=height.size(); stack<int> st;
        // for(int i=0;i<n;i++){
        //     while(!st.empty() && height[i]>height[st.top()]){
        //         int curr=st.top(); st.pop();
        //         if(st.empty()) break;
        //         int h=min(height[i],height[st.top()])-height[curr], d=i-st.top()-1;
        //         water+=d*h;
        //     }
        //     st.push(i);
        // }
        // return water;
        
        
        // Way: Two pointer TC: O(n), SC: O(1)
        // int n=height.size(),left=0, maxL=0, right=n-1, maxR=0,ans=0;
        // while(left<=right){
        //     maxL=max(maxL,height[left]);
        //     maxR=max(maxR,height[right]);
        //     if(height[left]<height[right])
        //         ans+=maxL-height[left++];
        //         else ans+=maxR-height[right--];
        // }
        // return ans;
        
        // Way: DP TC: O(n), SC: O(n)
        int n=height.size(),val=0; vector<int> dp(n);
        for(int i=0;i<n;i++) {
            val=max(val,height[i]); dp[i]=val;
        }
        val=0;
        for(int i=n-1;i>=0;i--){
            val=max(val,height[i]); dp[i]=min(dp[i],val);
        }
        val=0;
        for(int i=0;i<n;i++) val+=dp[i]-height[i];
        return val;
        
         
    }
};