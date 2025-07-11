/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* swapPairs(struct ListNode* head) {
    struct ListNode *temp,*temp1,*temp2;
    
    if (head==NULL ||head->next==NULL){
       return head;
    }
    else{
        struct ListNode *temp,*first,*second,*third,*prev,*newhead;
        prev=NULL;
        newhead=head->next;
        temp=head;
        while(temp!=NULL && temp->next!=NULL){
            first=temp;
            second=temp->next;
            third=second->next;
            first->next=third;
            second->next=first;
            if(prev!=NULL){
                prev->next=second;
            }
            prev=first;
            temp=third;
        }
        return newhead;
        }

}