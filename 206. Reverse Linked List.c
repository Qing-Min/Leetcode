/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* temp=NULL;
    struct ListNode* previous=NULL;
    struct ListNode* current=head;
    if(head==NULL){
        return head;
    }
    else{
        while(current->next!=NULL){
            temp=current->next;
            current->next=previous;
            previous=current;
            current=temp;
        }
        return current;
    }
}