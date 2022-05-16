class Solution {
public:
    //for Way3: Recursive
    // vector<vector<int>> twoSum(vector<int> &nums,int target,int start){
    //     vector<vector<int>> result; int left=start,right=nums.size()-1;
    //     while(left<right){
    //         int curSum=nums[left]+nums[right];
    //         if(curSum<target || (left>start && nums[left]==nums[left-1])) { left++; }
    //         else if(curSum>target || (right<nums.size()-1 && nums[right]==nums[right+1])){ right--; }
    //         else {result.push_back({nums[left++],nums[right--]});}
    //     }
    //     return result;
    // }
    // vector<vector<int>> nSum(vector<int> &nums,int target,int start, int num){
    //     vector<vector<int>> res; int n=nums.size();
    //     if(start==n || nums[start]*num>target || target>nums.back()*num) {return res;}
    //     if(num==2) {return twoSum(nums,target,start);}
    //     for(int i=start;i<n;i++){
    //         if(i==start || nums[i-1]!=nums[i]){
    //             for(auto &j: nSum(nums,target-nums[i],i+1,num-1)){
    //                 res.push_back({nums[i]}); 
    //                 res.back().insert(end(res.back()),begin(j),end(j));
    //             }
    //         }
    //     }
    //     return res;
    // }
    
    
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        // Way1: Brute force TC: O(n^4), SC: O(n^n)
//         vector<vector<int>> ans; int n=nums.size();  
//         for(int i=0;i<n-3;i++){
//             for(int j=i+1;j<n-2;j++){
//                 for(int k=j+1;k<n-1;k++){
//                     for(int l=k+1;l<n;l++){
//                         if(nums[i]+nums[j]+nums[k]+nums[l]==target){
//                             vector<int> vec;
//                             vec.push_back(nums[i]); vec.push_back(nums[j]); vec.push_back(nums[k]);
//                             vec.push_back(nums[l]);
//                             ans.push_back(vec);
//                         } 
//                     }
//                 }
//             }
           
//         }
//         return ans;

        
        //Way2: two pointer & sorting TC: O(n^3)+o(nlogn), SC: O(n)
//         vector<vector<int>> ans; int n=nums.size(); 
//         if(n<4) return ans;
//         sort(nums.begin(),nums.end());
//         for(int i=0;i<n-3;i++){
//             if(i>0 && nums[i]==nums[i-1]) continue;
//             if(nums[i]+nums[i+1]+nums[i+2]+nums[i+3]>target) break;
//             if(nums[i]+nums[n-3]+nums[n-2]+nums[n-1]<target) continue;
            
//             for(int j=i+1;j<n-2;j++){
//                 if(j>i+1 && nums[j]==nums[j-1]) continue;
//                 if(nums[i]+nums[j]+nums[j+1]+nums[j+2]>target) break;
//                 if(nums[i]+nums[j]+nums[n-2]+nums[n-1]<target) continue;
                
//                 int left=j+1, right=n-1;
//                 while(left<right){
//                     int sum=nums[left]+nums[right]+nums[i]+nums[j];
//                     if(sum<target) left++;
//                     else if(sum>target) right--;
//                     else{
//                         ans.push_back(vector<int>{nums[i],nums[j],nums[left],nums[right]});
//                         do { left++; } while(nums[left]==nums[left-1] && left<right);
//                         do{ right--; } while(nums[right]==nums[right+1] && left<right);
//                     }
//                        // while(j+1<n && nums[j]==nums[j+1]) ++j; //to avoid duplicates 
//                 }
//                     // while(i+1<n && nums[i]==nums[i+1]) ++i; //to avoid duplicates
//             }
//         }
//         return ans;
        
        
        //Way3: Recursive
        // sort(nums.begin(),nums.end());
        // return nSum(nums,target,0,4);
        
        //Way4: Hashmap TC: O(n^2), SC O(n^2)
//         vector<vector<int>> ans; int n=nums.size(); sort(nums.begin(),nums.end());
//         unordered_map<int,vector<pair<int,int>>> mp; if(n<4) return ans; 
//         for(int i=0;i<n-1;i++)
//             for(int j=i+1;j<n;j++) 
//                 mp[nums[i]+nums[j]].push_back({i,j});
        
//         for(int i=0;i<n-1;i++){
//             if(i>0 && nums[i]==nums[i-1]) continue;
//             for(int j=i+1;j<n;j++){
//                 if(j>i+1 && nums[j]==nums[j-1]) continue;
//                 int sum=target-nums[i]-nums[j];
//                 if(mp.find(sum)!=mp.end()){
//                     for(auto it: mp[sum]){
//                         int k=it.first, l=it.second;
//                         if(k>j){
//                             if(!ans.empty() && ans.back()[0]==nums[i] && ans.back()[1]==nums[j] && ans.back()[2]==nums[k] && ans.back()[3]==nums[l]) continue;
//                             vector<int> temp={nums[i],nums[j],nums[k],nums[l]};
//                             ans.push_back(temp);
//                         }
//                     }
//                 }
//             }
//         }
//         return ans;
        
        
        //Way5: Two pointer with set(simplified) TC: O(n^2), SC: O(n^2)
        int n=nums.size(); vector<vector<int>> ans; set<vector<int>> res;
        if(n<4) return ans; sort(nums.begin(),nums.end());
        
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int l=j+1, r=n-1,req=target-nums[i]-nums[j];
                while(l<r){
                    if(nums[l]+nums[r]==req) {
                        res.insert({nums[i],nums[j],nums[l],nums[r]});
                        if(nums[l]==nums[l+1]) l++; else r--;
                    }
                    else if(nums[l]+nums[r]>req) r--;
                    else l++;
                }
            }
        }
        for(auto it: res) ans.push_back(it);
        return ans;
        
        
        //Way6: Multimap TC: O(n^2)+O(nlogn), SC O(n) -> TLE
//         vector<vector<int>> result; multimap<int,pair<int,int>> mp; set<vector<int>> s;
//         int n=nums.size();
        
//         for(int i=0;i<n;i++){
//             for(int j=i+1;j<n;j++){
                
//                 int sum=nums[i]+nums[j]; auto res=mp.equal_range(target-sum);
                
//                 for(auto it=res.first; it!=res.second;it++){
//                     int a=it->second.first, b=it->second.second;
//                     if(a!=i && a!=j && b!=i && b!=j){
//                         vector<int> quad={nums[a],nums[b],nums[i],nums[j]};
//                         sort(quad.begin(),quad.end());
//                         if(s.find(quad)==s.end()){
//                             s.emplace(quad); result.emplace_back(move(quad));
//                         }
//                     }
//                 }
//                 mp.emplace(make_pair(sum,make_pair(i,j)));
//             }
//         }
//         return result;
    }
};