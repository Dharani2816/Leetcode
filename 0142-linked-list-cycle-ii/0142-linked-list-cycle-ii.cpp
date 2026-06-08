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
    ListNode *detectCycle(ListNode *head) {
        ListNode* res = nullptr;
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast && fast->next){
           slow = slow->next;
           fast = fast->next->next;
           if(slow == fast){
            res = slow;
            break;
           } 
        }
        if(!res){
            return nullptr;
        }
        ListNode* temp1 = head;
        ListNode* temp2 = res;
        while(temp1 && temp2){
            if(temp1 == temp2){
                return temp1;
            }
            temp1 = temp1 -> next;
            temp2 = temp2->next;
        }
        return nullptr;
    }
};