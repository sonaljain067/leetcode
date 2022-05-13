class Solution {
    //For Way1: Merge sort
//     void merge(long long int l, long long int mid, long long int r, vector<int> &nums, long long int &cnt){
//         vector<long long int> copy;
//         for(int i=0;i<nums.size();i++) copy.push_back(nums[i]);
//         vector<int> temp(r-l+1,0); long long int i=l, j=mid+1, cc=0, k=0;
        
//         while(i<=mid && j<=r){
//             while(i<=mid && copy[i]<=2*copy[j]) i++;
//             cnt+=mid-i+1;
//             j++;
//         }
//         i=l, j=mid+1;
//         while(i<=mid && j<=r){
//             if(nums[i]<=nums[j]) temp[k++]=nums[i++];
//             else temp[k++]=nums[j++];
//         }
        
//         while(i<=mid){
//             cnt+=cc; temp[k++]=nums[i++];
//         }
//         while(j<=r) temp[k++]=nums[j++];
//         k=0;
//         for(int i=l;i<=r;i++) nums[i]=temp[k++];
//         return;
//     }
//     void mergeSort(long long int l, long long int r, vector<int> &nums,long long int &cnt){
//         if(r<=l) return;
//         long long int mid=l+(r-l)/2;
//         mergeSort(l,mid,nums,cnt);
//         mergeSort(mid+1,r,nums,cnt);
//         merge(l,mid,r,nums,cnt);
//         return;
//     }
    
    //Way2: Nested loops
    // int reverse(int num){
    //     int rev_num=0; 
    //     while(num>0){
    //         rev_num=rev_num*10+num%10;
    //         num=num/10;
    //     }
    //     return rev_num;
    // }
    
    //Way3: Hash-map
    // int reverse(int num){
    //     int rev_num=0;
    //     while(num>0){
    //         rev_num=rev_num*10+num%10; num=num/10;
    //     }
    //     return rev_num;
    // }
    
    //Way4: BST
    class Node{
    public:
        Node *left, *right; int val, count_ge;
        Node(int val, bool real){
            this->val=val;
            if(real) this->count_ge=1;
            else this->count_ge=0;
            this->left=NULL; this->right=NULL;
        }
    };
    private:
    Node* insert(Node *head, int val){
        if(head==NULL) return new Node(val, true);
        else if(val==head->val) head->count_ge++;
        else if(val < head->val) head->left=insert(head->left,val);
        else{
            head->count_ge++;
            head->right=insert(head->right,val);
        }
        return head;
    }
    int search(Node *head, long long target){
        if(head==NULL) return 0;
        else if(target==head->val) return head->count_ge;
        else if(target<head->val) return head->count_ge+search(head->left,target);
        else return search(head->right,target);
    }
    Node *sortArrayToBST(vector<int> &arr,int start,int end){
        if(start>end) return NULL; int mid=(start+end)/2;
        Node *root=new Node(arr[mid],false);
        root->left=sortArrayToBST(arr,start,mid-1);
        root->right=sortArrayToBST(arr,mid+1,end);
        return root;
    }
    
    
public:
    int reversePairs(vector<int>& nums) {
        //Way1:Merge sort TC: O(logn)+O(n)+O(n) SC: O(n)
        // long long int cnt=0; 
        // mergeSort(0,nums.size()-1,nums,cnt);
        // return cnt;
        
        //Way2: Nested loops
        // int res=0, n=nums.size();
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++)
        //         if(reverse(nums[i]==nums[j])) res++;
        // }
        // return res;
        
        //Way3: Hash-map
        // int n=nums.size(),res=0;
        // unordered_map<int,int> freq;
        // for(int i=0;i<n;i++) ++freq[nums[i]];
        // for(int i=0;i<n;i++){
        //     --freq[nums[i]]; res+=freq[reverse(nums[i])];
        // }
        // return res;
        
        //Way4: BST
        if(nums.empty()) return 0;
        vector<int> copy=nums; int n=nums.size(),count=0;
        sort(copy.begin(),copy.end());
        Node *head=sortArrayToBST(copy,0,copy.size()-1);
        for(int i=0;i<n;i++){
            count+=search(head,nums[i]*2LL+1);
            head=insert(head,nums[i]);
        }
        return count;
        
        //Way3: Divide & Conquer
        
        //Way5: Binary Search
//         vector<int> sortedNums; int res=0, target=0,pos=0,n=nums.size();
//         for(int i=n-1;i>=0;i--){
//             target=nums[i]> 0 ? (nums[i]-1)/2 : (nums[i]/2-1);
//             auto ptr=upper_bound(sortedNums.begin(),sortedNums.end(),target);
            
//             res+=ptr-sortedNums.begin();
//             pos=upper_bound(sortedNums.begin(),sortedNums.end(),nums[i])-sortedNums.begin();
//             sortedNums.insert(sortedNums.begin()+pos,nums[i]);
//         }
//         return res;
        
    }
};