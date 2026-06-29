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
    ListNode* middle(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
    ListNode* reverse(ListNode*& head){
        ListNode* prev = nullptr;
        ListNode* curr = head;
        while(curr){
            ListNode* temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        return prev;
    }
    void insert(ListNode*&list,ListNode*&listHead,int num){
        ListNode* nn = new ListNode(num);
        if(!listHead){
            listHead = nn;
            list = nn;
        }
        else{
            list->next = nn;
            list = nn;
        }
    }
    void reorderList(ListNode* head) {
        ListNode* l1 = nullptr;
        ListNode* middleNode = middle(head);
        l1 = middleNode->next;
        middleNode->next = nullptr;
        l1 = reverse(l1);
        ListNode* dummy = new ListNode(0,head);
        ListNode* temp1 = head;
        ListNode* temp2 = l1;
        ListNode* prev = dummy;
        while(temp1 && temp2){
            ListNode* n1 = temp1->next;
            ListNode* n2 = temp2->next;
            temp1->next = temp2;
            temp2->next =  n1;
            temp1 = n1;
            temp2 = n2;
        }
    }
};