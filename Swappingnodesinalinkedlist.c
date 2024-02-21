/*
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* swapNodes(struct ListNode* head, int k) {
    int size=0;
    struct ListNode* cur1=head;
    struct ListNode* cur2=head;
    while(cur1!=NULL)
    {
        size++;
        cur1=cur1->next;
    }
    cur1=head;
    for(int i=0;i<k-1;i++)
    {
        cur1=cur1->next;
    }
    for(int i=0;i<size-k;i++)
    {
        cur2=cur2->next;
    }
    int q=cur1->val;
    cur1->val=cur2->val;
    cur2->val=q;
    return head;


}
