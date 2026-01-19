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
    // void insertNode(ListNode* head,ListNode* node){
    //     if(!head){
    //         head = node;
    //         return;
    //     }
    //     ListNode* temp = head;
    //     while(temp->next){
    //         temp = temp -> next;
    //     }
    //     temp->next = node;
    // }
    ListNode* partition(ListNode* head, int x) {
        if(!head || !head->next){
            return head;
        }
        ListNode* fp = nullptr;
        ListNode* sp = nullptr;
        ListNode* sphead = nullptr;
        ListNode* fphead = nullptr;
        ListNode* temp1 = head;
        while (temp1) {
            ListNode* n = new ListNode(temp1->val);
            if (temp1->val < x) {
                if (!fp) {
                    fp = n;
                    fphead = n;
                } else {
                    fp->next = n;
                    fp = n;
                }
            } else {
                // insertNode(temp2,temp1);
                if (!sp) {
                    sp = n;
                    sphead = sp;
                } else {
                    sp->next = n;
                    sp = n;
                }
            }
            temp1 = temp1->next;
        }

        ListNode* temp3 = fphead;
        while (temp3->next) {
            temp3 = temp3->next;
        }
        temp3->next = sphead;

        return fphead;
    }
};