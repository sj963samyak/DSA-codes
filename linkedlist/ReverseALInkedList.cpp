Node* reverseLinkedList(Node *head)
{
    // Write your code here
    if(head==NULL || head->next==NULL)
    return head;
     Node* prev=NULL;
     Node* curr=head;
     Node* forward=NULL;
     while(curr!=NULL){
         forward=curr->next;
         curr->next=prev;
         prev=curr;
         curr=forward;
     }
     return prev;
}
