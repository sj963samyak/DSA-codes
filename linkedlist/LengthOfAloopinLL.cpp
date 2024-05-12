int findLength(Node* slow,Node* fast){
    int count=1;
    fast=fast->next;
    while(slow!=fast){
        fast=fast->next;
        count++;
    }
    return count;
}
int lengthOfLoop(Node *head) {
    // Write your code here
    Node* slow=head;
    Node* fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
            return findLength(slow,fast);
    }
    return 0;
}       