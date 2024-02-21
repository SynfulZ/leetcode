/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode *cur1 = list1;
    struct ListNode *cur2 = list2;
    struct ListNode *head = NULL;
    struct ListNode *tail = NULL;

    while (cur1 != NULL || cur2 != NULL) {
        struct ListNode *temp = (struct ListNode *)malloc(sizeof(struct ListNode));

        if (cur1 == NULL) {
            temp->val = cur2->val;
            temp->next = NULL;
            cur2 = cur2->next;
        } else if (cur2 == NULL) {
            temp->val = cur1->val;
            temp->next = NULL;
            cur1 = cur1->next;
        } else {
            if (cur1->val <= cur2->val) {
                temp->val = cur1->val;
                temp->next = NULL;
                cur1 = cur1->next;
            } else {
                temp->val = cur2->val;
                temp->next = NULL;
                cur2 = cur2->next;
            }
        }

        if (head == NULL) {
            head = temp;
            tail = temp;
        } else {
            tail->next = temp;
            tail = temp;
        }
    }

    return head;
}
