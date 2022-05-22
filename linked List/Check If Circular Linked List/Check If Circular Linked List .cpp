bool isCircular(struct Node *head){
    //code here
    
    struct Node* temp=head->next;
    while(temp!=NULL){
        if(temp==head)
            return true;
        temp=temp->next;
    }
    return false;    
}
