

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
     ListNode*prevptr,*currptr,*nextptr;
        prevptr=NULL;
        currptr=nextptr=head;
        while(nextptr!=NULL){
         nextptr=nextptr->next;
        currptr->next=prevptr;
            prevptr=currptr;
        currptr=nextptr;
        }
        head=prevptr;
        return head;
    }
};
