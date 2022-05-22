class Solution
{
    void recursion(Node* head,int level,vector<int> &ans){
       if(head==NULL)
        return;
        if(level==ans.size())
            ans.push_back(head->data);
       recursion(head->right,level+1,ans);
       recursion(head->left,level+1,ans);
        
    }
    public:
    //Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root)
    {
       // Your Code here
       vector<int> ans;
       recursion(root,0,ans);
       return ans;
    }
};