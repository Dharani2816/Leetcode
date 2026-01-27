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
    // void insert(ListNode* l,ListNode* lhead,ListNode* node){
    //     if(l == nullptr){
    //         l = node;
    //         lhead = node;
    //     }
    //     else{
    //         l->next = node;
    //         l = node;
    //     }
    // }
    ListNode* oddEvenList(ListNode* head) {
       ListNode* odd = nullptr;
       ListNode* even = nullptr;
       ListNode* oddHead = nullptr;
       ListNode* evenHead = nullptr;
       int i = 1;
       for(ListNode* temp = head;temp!=nullptr;temp=temp->next){
        ListNode* n = new ListNode(temp->val);
        if(i%2 == 1){
            if(odd == nullptr){
            odd = n;
            oddHead = n;
        }
        else{
            odd->next = n;
            odd = n;
        }
        }
        else{
            if(even == nullptr){
            even = n;
            evenHead = n;
        }
        else{
            even->next = n;
            even = n;
        }
        }
        i++;
       }
       if(odd && evenHead)
            odd->next = evenHead;
       return oddHead; 
    }
};