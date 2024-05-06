class Solution {
public:
//using striver approach 3 to find the intersection point
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA==NULL || headB==NULL) return NULL;
        ListNode* temp1=headA;
        ListNode* temp2=headB;
        while(temp1!=temp2){
            temp1=temp1->next;
            temp2=temp2->next;
            if(temp1==temp2)
                return temp1;
            if(temp1==NULL) temp1=headB;
            if(temp2==NULL) temp2=headA;       
        }
        return temp1;
    }
};