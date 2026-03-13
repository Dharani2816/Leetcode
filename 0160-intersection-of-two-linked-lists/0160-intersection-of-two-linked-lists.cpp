/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        int lengthA = 0;
        int lengthB = 0;
        for (ListNode* temp = headA; temp != nullptr; temp = temp->next) {
            lengthA++;
        }
        for (ListNode* temp = headB; temp != nullptr; temp = temp->next) {
            lengthB++;
        }
        ListNode* temp1 = headA;
        ListNode* temp2 = headB;
        if (lengthA > lengthB) {
            while (lengthA != lengthB) {
                lengthA--;
                temp1 = temp1->next;
            }
        } else if(lengthB > lengthA) {
            while (lengthA != lengthB) {
                lengthB--;
                temp2 = temp2->next;
            }
        }
        ListNode* l1 = temp1;
        ListNode* l2 = temp2;
        ListNode* res = nullptr;
        while (l1 && l2) {
            if (l1 == l2) {
                res = l1;
                break;
            }
            l1 = l1->next;
            l2 = l2->next;
        }
        return res;
    }
};