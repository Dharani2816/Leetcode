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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next){
            return head;
        }
        int length = 0;
        ListNode* temp1 = head;
        while(temp1){
            length++;
            temp1 = temp1->next;
        }
        k = k % length;
        for(int i=0;i<k;i++){
            ListNode* temp = head;ListNode* prev = head;
            while(temp && temp->next){
                prev = temp;
                temp = temp->next;
            }
            prev->next = nullptr;
            temp->next = head;
            head = temp;
        }
        return head;
    }
};