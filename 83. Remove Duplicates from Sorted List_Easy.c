/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    struct ListNode* current=head;
    struct ListNode* link=head;
    int value=0,firsttime=1;
    if(head==NULL){
        return head;
    }
    value=head->val;
    while(current!=NULL){
        if(firsttime==1){
            link=current;
            firsttime=0;
            current=current->next;
            continue;
        }
        if(value==current->val){
            current=current->next;
            continue;
        }
        if(value!=current->val){
            link->next=current;
            link=current;
            value=current->val;
            current=current->next;
            continue;
        }
    }
    link->next=NULL;
    return head;
}
