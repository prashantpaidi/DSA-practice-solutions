class Solution {
    
  public:
    // Function to return the diameter of a Binary Tree.
    int ans=0;
    int height(Node* root){
        if(root== NULL)
            return 0;
        
        int left=height(root->left);
        int right=height(root->right);
        ans =max(ans,left+right+1);
        return max(right,left)+1;

    }
    int diameter(Node* root) {
        // Your code here
        // ans=INT_MIN;
        int x = height(root);
        return ans;
        
    }
};
