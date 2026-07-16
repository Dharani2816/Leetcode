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
    void reverse(ListNode*&p, ListNode*&s, ListNode*&e, ListNode*&en) {
        ListNode* prev = p;
        ListNode* curr = s;
        while (curr != en) {
            ListNode* temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        // node s is the new tail of the list and e is the new head node 
        p->next = e;
        s->next = en;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* dummy = new ListNode(-1, head);
        ListNode* prev = dummy;
        ListNode* start = head;
        ListNode* temp = head;
        for (int i = 1; i < k; i++) {
            if (temp)
                temp = temp->next;
        }
        ListNode* end = temp; // end points to kth node from start
        while (end) {
            ListNode* endNext = end->next;
            reverse(prev,start,end,endNext);
            prev = start;
            start = endNext;
            temp = start;
            for (int i = 1; i < k; i++) {
                if (temp)
                    temp = temp->next;
            }
            end = temp;
        }
        return dummy->next;
    }
};