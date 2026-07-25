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
    ListNode* reverse(ListNode*&head){
        ListNode* temp = head;
        ListNode* prev = nullptr;
        while(temp){
            ListNode* curr = temp->next;
            temp->next = prev;
            prev = temp;
            temp = curr;
        }
        return prev;
    }
    vector<int> nextLargerNodes(ListNode* head) {
        ListNode* head1 = reverse(head);
        int size = 0;
        ListNode* temp = head1;
        while(temp){
            size++; temp = temp->next;
        }
        vector<int>result(size,0);
        temp = head1;
        int i = size-1; stack<int>st;
        while(temp){
            while(!st.empty() && st.top() <= temp->val) st.pop();
            if(!st.empty()) result[i] = st.top();
            st.push(temp->val);
            i--;
            temp = temp->next;
        }
        return result;
    }
};