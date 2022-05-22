Node* reverseDLL(Node * head)
{
    Node*curr=head;
    if(head ==NULL || head->next==NULL)
        return head;
    head=curr;
    Node *temp=NULL;
    while(curr!=NULL){
        temp=curr->prev;
        curr->prev=curr->next;
        // curr->data=curr->data;
        curr->next=temp;
        curr=curr->prev;
    }
    // curr->prev=curr->next;
    // curr->next=NULL;
    return temp->prev;
}