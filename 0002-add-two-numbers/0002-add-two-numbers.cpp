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
    void insertNode(ListNode*& l,ListNode *n,ListNode*& rear){
        if(l == nullptr){
            l = n;
            rear = n;
        }
        else{
            rear->next = n;
            rear = n;
        }
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       int carry = 0;
       ListNode *temp1 = l1;
       ListNode* temp2 = l2;
       ListNode* rear = nullptr;
       ListNode* l3 = nullptr;
       while(temp1 != nullptr && temp2 != nullptr){
            int sum = temp1->val + temp2->val + carry;
            if(sum >= 10){
                carry = 1;
                sum = sum % 10;
            }
            else{
                carry = 0;
            }
            ListNode*n  = new ListNode(sum);
            insertNode(l3,n,rear);
            temp1 = temp1 -> next;
            temp2 = temp2 -> next;
       }
       while(temp1){
        int sum = temp1->val + carry;
        if(sum >= 10){
            carry = 1;
            sum = sum % 10;
        }
        else{
            carry = 0;
        }
        ListNode *n = new ListNode(sum);
        insertNode(l3,n,rear);
        temp1 = temp1 -> next;
       }
       while(temp2){
        int sum = temp2->val + carry;
        if(sum >= 10){
            carry = 1;
            sum = sum % 10;
        }
        else{
            carry = 0;
        }
        ListNode *n = new ListNode(sum);
        insertNode(l3,n,rear);
        temp2 = temp2 -> next;
       }
       if(carry){
        ListNode *n = new ListNode(carry);
        insertNode(l3,n,rear);
       }
       return l3;
    }
};