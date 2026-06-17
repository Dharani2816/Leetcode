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
    void swapNodes(ListNode*
    &head,ListNode*n1Prev,ListNode*n1,ListNode*n2){
        if(n1 == head) head = n2;
        n1->next = n2->next;
        n2->next = n1;
        if(n1Prev)
            n1Prev->next = n2;
    }
    ListNode* swapPairs(ListNode* head) {
      ListNode* prev = nullptr;
      ListNode* temp = head;
      while(temp && temp->next){
        swapNodes(head,prev,temp,temp->next);
        prev = temp;
        temp = temp->next;
      }
      return head;
    }
};