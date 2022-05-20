class Solution{
    Node* merge(Node* left,Node* right){
        if(left==NULL)
            return right;
        if(right == NULL)
            return left;
        
        Node* ans =  new Node(-1);
        Node* temp = ans;
        while(left!=NULL and right!=NULL){
            if(left->data < right->data){
                temp->next = left;
                temp=left;
                left=left->next;
            }else{
                temp->next = right;
                temp=right;
                right=right->next;
            }
        }
        while(left!=NULL){
            temp->next = left;
            temp=left;
            left=left->next;
        }
        while(right!=NULL){
            temp->next = right;
                temp=right;
                right=right->next;
        }
        return ans->next;
    }
    Node* findMid(Node*head){
        Node* fast=head->next,*slow=head;
	//fast is head-> next to get (int)mid/2
        while(fast!=NULL and fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
        return slow;
    }
  public:
    //Function to sort the given linked list using Merge Sort.
    Node* mergeSort(Node* head) {
        // your code here
        // base case
        if(head== NULL || head->next==NULL){
            return head;
        }
        
        Node* mid= findMid(head);
	// divide into two linked link
        Node* left= head;
        Node* right=mid->next;
        mid->next=NULL;//left list end is NULL
	
        
        left=mergeSort(left);
        right=mergeSort(right);
        
        
        Node* result=merge(left,right);
        
        return result;
        
    }
};