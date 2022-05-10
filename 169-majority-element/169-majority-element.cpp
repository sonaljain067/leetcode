class Solution {
public:
    //Way2: Binary search tree TC: O(n^2) [O(nlogn) for self-balancing BST], SC: O(n)
    // struct node{
    //     int key,c=0;
    //     struct node *left, *right;
    // };
    // struct node *newNode(int item){
    //     struct node* temp=(struct node*) malloc(sizeof(struct node));
    //     temp->key=item; temp->c=1;
    //     temp->left=temp->right=NULL;
    //     return temp;
    // }
    // struct node *insert(struct node* node, int item, int &maxCount){
    //     if(node==NULL){
    //         if(maxCount==0) maxCount=1;
    //         return newNode(item);
    //     }
    //     if(item < node->key) node->left=insert(node->left,item,maxCount);
    //     else if(item > node->key) node->right=insert(node->right,item,maxCount);
    //     else node->c++;
    //     maxCount=max(maxCount,node->c);
    //     return node;
    // }
    // void inorder(struct node* root, int s){
    //     int ans=-1;
    //     if(root!=NULL){
    //         inorder(root->left,s);
    //         if(root->c > s/2) cout<<root->c;
    //         inorder(root->right,s);
    //     }
    // }
    
    // Way5: Moore voting algo TC: O(n), SC: O(1)
    int findCandidate(vector<int>& nums,int n){
        int major=0, count=1;
        for(int i=1;i<n;i++){
            if(nums[major]==nums[i]) count++;
            else count--;
            if(count==0){
                major=i; count=1;
            }
        }
        return nums[major];
    }
    bool isMajority(vector<int>&nums,int n,int cand){
        int count=0;
        for(int i=0;i<n;i++)
            if(nums[i]==cand) count++;

        if(count>n/2) return 1;
        else return 0;
    }
    
    int majorityElement(vector<int>& nums) {
        // Way1: Nested loops TC: O(N^2), SC: O(1)
        // int n=nums.size(),maxCount=0,index=-1;
        // for(int i=0;i<n;i++){
        //     int count=0;
        //     for(int j=0;j<n;j++){
        //         if(nums[i]==nums[j]) count++;
        //     }
        //     if(count>maxCount){
        //             maxCount=count; index=i;
        //     }
        // }
        // if(maxCount>n/2) return nums[index];
        // else return -1;
    
        //Way2: Binary search tree TC: O(n^2) [O(nlogn) for self-balancing BST], SC: O(n)
        // struct node* root=NULL; int maxCount=0; int n=nums.size();
        // for(int i=0;i<n;i++) root=insert(root,nums[i],maxCount);
        // if(maxCount > n/2) 
        //     inorder(root,n);
        // else return -1;
        
    // Way3: Sorting TC: O(nlogn), SC: O(1)
//     int ans=-1,n=nums.size(),cnt=1;
//     if(nums.size()==1) return nums[0];
//     sort(nums.begin(),nums.end()); 
//     for(int i=1;i<n;i++){
//         if(nums[i-1]==nums[i]) cnt++;
//         else{
//              if(cnt>n/2){
//                   ans=nums[i-1];
//              }
//              cnt=1;
//         } 
        
//     }
//     return ans;
    // Way4: Using map TC: O(n), SC: O(n)
    // unordered_map<int,int> umap; int n=nums.size(); int ans=-1;
    // for(int i=0;i<nums.size();i++)
    //     umap[nums[i]]++;
    // for(auto ele: umap){
    //     if(ele.second>n/2) ans=ele.first;
    // }
    // return ans;

    // Way5: Moore voting algo TC: O(n), SC: O(1)
        int cand=findCandidate(nums,nums.size());
        if(isMajority(nums,nums.size(),cand))
            return cand;
        else return -1;
    }
    
    
    
    
};