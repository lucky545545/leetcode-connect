/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* prev = NULL;
    struct ListNode* next1 = NULL;
    while(head != NULL){
        next1 = head-> next;
        head-> next = prev;
        prev = head;
        head = next1;
    }
    head = prev;
    return head;
    
}