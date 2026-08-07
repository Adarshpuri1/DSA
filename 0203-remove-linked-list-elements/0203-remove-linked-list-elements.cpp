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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* temp = head;
        ListNode* ans = new ListNode(0);
        ListNode* temp1 = ans;
        while(temp){
            if(temp->val != val){
                ListNode* node = new ListNode(temp->val);
                temp1->next = node;
                temp1 = temp1->next;
            }
            temp = temp->next;
        }

        return ans->next;
    }
};