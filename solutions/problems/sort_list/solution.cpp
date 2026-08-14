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
    ListNode* sortList(ListNode* head) {
        if(head == nullptr){
            return nullptr;
        }
        ListNode* dummy = head;
        vector<int> temp;
        while(dummy != nullptr){
            temp.push_back(dummy->val);
            dummy = dummy->next;
        }
        sort(temp.begin() , temp.end());
        ListNode* dummy2 = head;
        int i = 0;
        while(dummy2 != nullptr){
            dummy2->val = temp[i];
            i++;
            dummy2 = dummy2->next;
        }
        return head;
    }
};