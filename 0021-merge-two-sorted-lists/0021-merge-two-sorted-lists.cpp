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
    void insert(ListNode*& head, ListNode*& n, int num) {
        ListNode* nn = new ListNode(num);
        if (!head) {
            head = nn;
            n = nn;
        } else {
            n->next = nn;
            n = nn;
        }
    }
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* l1 = list1;
        ListNode* l2 = list2;
        ListNode* resultHead = nullptr;
        ListNode* result = nullptr;
        while (l1 && l2) {
            if (l1->val < l2->val) {
                insert(resultHead, result, l1->val);
                l1 = l1->next;
            } else {
                insert(resultHead, result, l2->val);
                l2 = l2->next;
            }
        }
        while (l1) {
            insert(resultHead, result, l1->val);
            l1 = l1->next;
        }
        while (l2) {
            insert(resultHead, result, l2->val);
            l2 = l2->next;
        }
        return resultHead;
    }
};