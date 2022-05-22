void recursion(struct Node* root,int level,vector<int>&ans){
    if(root==NULL)
        return ;
    if(level==ans.size()){
        ans.push_back(root->data);
    }
    recursion(root->left,level+1,ans);
    recursion(root->right,level+1,ans);
}

vector<int> leftView(struct Node *root)
{
  // Your code here
  vector<int> ans;
  recursion(root,0,ans);
  return ans;
}
