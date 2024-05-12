int lengthOfLL(Node* head){
    int count=1;
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
        count++;
    }
    return count;
}
Node* deleteMiddle(Node* head){
    // Write your code here.
    int len=lengthOfLL(head);
    int pos;
    if(len%2==0){
        pos=len/2;
    }else{
        pos=len/2;
    }
    Node* temp=head;
    if(head==NULL || head->next==NULL){
        return NULL;
    }
    while(temp!=NULL){
        pos--;
        if(pos==0){
            temp->next=temp->next->next;
            break;
        }
        temp=temp->next;
    }
    return head;
}
