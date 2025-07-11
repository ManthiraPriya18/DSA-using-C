struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    int count=0;
    struct ListNode *temp;
    struct ListNode *tem;
        temp=head;
        while(temp!=NULL){
            temp=temp->next;
            count++;
        }
        if (count==n){
            temp=head->next;
            free(head);
            return temp;
        }
        int pos;
        int i=0;
        pos=count-n;
        temp=head;

        while(i<pos-1){
            temp=temp->next;
            i++;
        }
        tem=temp->next;
        temp->next=tem->next;
        free(tem);
        return head;
}