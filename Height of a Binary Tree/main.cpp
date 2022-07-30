class Solution{
    public:
    //Function to find the height of a binary tree.
    int height(struct Node* node){
        int lh,rh,ans=0;
        if(node==NULL)
          return 0;
        lh=height(node->left);
        rh=height(node->right);
        if(lh>rh)
          return lh+1;
        else
          return rh+1;

        
        // code here 
    }
};
