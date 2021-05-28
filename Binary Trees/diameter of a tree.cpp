class Solution
{
    public:
    //Function to return the diameter of a Binary Tree.
    int height(Node* root){
        if(root==NULL)return 0;
        int    l=height(root->left);
        int    r=height(root->right);
        return max(l,r)+1;
    }
    int diameter(Node* root)
    {
    // Your code here
    if(root==NULL)return 0;
    else {
        int h1=height(root->left)+height(root->right);
        int h2=diameter(root->right);
        int h3=diameter(root->left);
        return max(h3,max(h1+1,h2));
    }
    }

};
