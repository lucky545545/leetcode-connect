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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        int val1 = 0;
        int val2 = 0;
        ListNode* dummy = new ListNode();
        ListNode* current = dummy;
        while(l1 != nullptr || l2 != nullptr || carry != 0){
            
            val1 = (l1 != nullptr)? l1->val : 0;
            val2 = (l2 != nullptr)? l2->val : 0;
            int out_val = (val1 + val2 + carry);
            carry = out_val/10;
            int new_digit = out_val%10;
            current->next =new ListNode(new_digit); 
            current = current->next;
            if(l1 != nullptr){
                l1 = l1->next;
            }
            if(l2 != nullptr){
                l2 = l2->next;
            }

        }
        ListNode* result = dummy->next;
        delete dummy;
        return result;
        

        
    }
};