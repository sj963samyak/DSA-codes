//problem here is to find the starting point of a node/loop
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL || head->next==NULL){
            return NULL;
        }
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                slow=head;
                while(slow!=fast){
                    fast=fast->next;
                    slow=slow->next;
                }
                return slow;
            }
        }
        return NULL;
    }
};