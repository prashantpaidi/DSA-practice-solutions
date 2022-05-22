vector<int> reverseLevelOrder(Node *root)
{
    // code here
    vector<int> ans;
    if(root==NULL)
        return ans;
    
    queue<Node*> q;
    
    q.push(root);
    while(!q.empty()){
        Node* temp = q.front();
        ans.push_back(temp->data);
        q.pop();
        if(temp->right!=NULL)
            q.push(temp->right);
        if(temp->left!=NULL)
            q.push(temp->left);
            
    }
    reverse(ans.begin(),ans.end());
    return ans;
}