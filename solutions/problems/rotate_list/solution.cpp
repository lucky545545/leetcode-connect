/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* counter = head;
        ListNode* out = head;
        int count = 1;
        if(!head){
            return 0;
        }
        while(counter->next != nullptr){
            counter = counter->next;
            count++;
        }
        counter->next = head;
        k = k % count;
        int move = count - k ;
        while(move >  1){
            out = out->next;
            move--;
        }
        ListNode* newout = out->next;
        out->next = nullptr;
        return newout;
        
    }
};