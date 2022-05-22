
class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* node)
    {
      //Your code here
      vector<int> ans;
        if(node==NULL)
        return ans;
        queue<Node *> q;
        q.push(node);
        while(q.empty() == false){
            Node* temp= q.front();
            ans.push_back(temp->data);
            q.pop();
            if(temp->left!=NULL)
                q.push(temp->left);
            if(temp->right!=NULL)
                q.push(temp->right);
            
        }
        return ans;
    }
};
