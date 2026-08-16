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
    bool isPalindrome(ListNode* head) {
        ListNode* start = head;
        stack<int> st;
        while(start != nullptr){
            st.push(start->val);
            start = start->next;
        }
        ListNode* start2 = head;
        while(start2 != nullptr){
            if(start2->val != st.top()){
                return false;
            }
            st.pop();
            start2 = start2->next;
        }
        return true;      
    }
};