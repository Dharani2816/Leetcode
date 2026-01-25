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
    void deleteNode(ListNode* head,ListNode* n){
        if(n == head){
            delete head;
            return;
        }
        ListNode* temp = head;
        while(temp->next != n){
            temp = temp -> next;
        }
        temp->next = temp->next->next;
        delete n;
    }
    ListNode* deleteMiddle(ListNode* head) {
            int length = 0;
            if(!head->next){
                return nullptr;
            }
            ListNode* temp = head;
            while(temp){
                length++;
                temp = temp -> next;
            }
            int mid = length / 2;
            //mid+=1;
            int i = 0;
            for(ListNode*temp = head;temp!=nullptr;temp=temp->next){
                if(i == mid){
                    deleteNode(head,temp);
                    break;
                }
                i++;
            }
            return head;
    }
};