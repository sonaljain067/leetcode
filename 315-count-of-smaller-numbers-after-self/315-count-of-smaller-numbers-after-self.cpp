struct Node{
    int data,count;
    struct Node *left, *right; 
    Node(int data){
        this->data=data;count=0;
        left=right=NULL;
    }
};
class Solution {
public:
    int insert(struct Node *node, int key){
        struct Node *r=NULL, *p; int c=0;
        
        while(node!=NULL){
            r=node;
            if((node->data)>=key){
                node->count=(node->count)+1; node=node->left;
            }
            else{
                c+=1+(node->count); node=node->right;
            }
        }
        p=new Node(key); 
        if(p->data <= r->data) r->left=p;
        else r->right=p;
        return c;
    }
    vector<int> countSmaller(vector<int>& nums) {
        int n=nums.size();
        vector<int> vec(n,0); int j=1; 
        while(j<n && nums[j-1]<=nums[j]) j++;
        if(j==n) return vec;
        j=n-2;
        while(j>-1 && nums[j]>=nums[j+1]){
            if(nums[j]>nums[j+1]) vec[j]=n-j-1;
            if(nums[j]==nums[j+1]) vec[j]=vec[j+1];
            j--;
        }
        if(j==-1) return vec;
        struct Node *root=new Node(nums[n-1]);
        for(int i=n-2;i>-1;i--) vec[i]=insert(root,nums[i]);
        return vec;
    }
};