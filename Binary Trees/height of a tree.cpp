class Solution{
    public:
    //Function to find the height of a binary tree.
    int height(struct Node* node){
        if(node==NULL)return 0;
        // code here 
        int l=height(node->left);
        int r=height(node->right);
        if(l>r)return l+1;
        else return r+1;
        
    }
};
