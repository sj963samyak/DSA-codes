
Node *findMiddle(Node *head) {
    // Write your code here
    Node* temp=head;
    int length=0;
    while(temp!=NULL){
        temp=temp->next;
        length++;
    }
    int position=length/2;
    int count=0;
    Node* curr=head;
    while(position--){
        curr=curr->next;
    }
    return curr;
}