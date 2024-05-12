//approach 1.is to use hashmap to track the visited nodes in a linked list if the node is repeated twice or is visited we will say that cycle exists.
//appraoch 2.is to use tortoise & heir approach.
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL){
            return false;
        }
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL && fast->next!=NULL ){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast) return true;
        }
        return false;
    }
};