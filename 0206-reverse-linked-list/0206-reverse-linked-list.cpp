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
    ListNode* reverseList(ListNode* head) {
        stack<int>s;
        ListNode* temp = head;
        while(temp!=nullptr){
            s.push(temp->val);
            temp = temp -> next;
        }
        ListNode* temp1 = head;
        while(temp1 != nullptr && !s.empty()){
            temp1->val = s.top();
            s.pop();
            temp1 = temp1 -> next;
        }
        return head;
    }
};