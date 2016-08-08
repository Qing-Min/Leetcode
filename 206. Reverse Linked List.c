/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    if(head==NULL){
        return head;
    }
    else{
        int length=1;
        struct ListNode *temp=head;
        while(temp->next!=0){
            length++;
            temp=temp->next;
        }
        temp=head;
        struct ListNode ** links=(struct ListNode **)malloc(length*sizeof(struct ListNode*));
        if(links==NULL){
            return NULL;
        }
        int i=0;
        while(temp!=NULL){
            links[i++]=temp;
            temp=temp->next;
        }
        temp=head;
        i=length-1;
        for(;i>0;i--){
            links[i]->next=links[i-1];
        }
        links[0]->next=NULL;
        head=links[length-1];
        free(links);
    }
    return head;
}
