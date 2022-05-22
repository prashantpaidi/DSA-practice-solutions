class Solution{
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        //Your code here
        Node* fast=head,*slow=head;
        while(fast!=NULL and fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
        Node* curr=slow,*prev=NULL,*temp;
        while(curr!=NULL){
            temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        slow->next=NULL;
        fast=head;
        while(prev!=NULL){
            if(fast->data!=prev->data)
                return false;
            prev=prev->next;
            fast=fast->next;
        }
        return true;
    }
};