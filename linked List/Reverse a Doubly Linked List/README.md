https://practice.geeksforgeeks.org/problems/reverse-a-doubly-linked-list/1

while swaping the temp pointer in used to prev pointer as while break from the loop current is equal to null

`// Function to reverse a doubly-linked list
void reverseDDL(struct Node** headRef)
{
    struct Node* prev = NULL;
    struct Node* curr = *headRef;
 
    // traverse the list
    while (curr != NULL)
    {
        // swap `next` and `prev` pointers for the current node
        swap(curr);
 
        // update the previous node before moving to the next node
        prev = curr;
 
        // move to the next node in the doubly linked list
        // (advance using `prev` pointer since `next` and `prev` pointers were swapped)
        curr = curr->prev;
    }
 
    // update head pointer to the last node
    if (prev != NULL) {
        *headRef = prev;
    }
}`