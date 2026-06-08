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
    void insertLL(ListNode*& head,ListNode*& n,int num){
        ListNode*nn = new ListNode(num);
        if(!head){
            head = nn;
            n = nn;
        }
        else{
            n->next = nn;
            n = nn; 
        }
    }
    ListNode* oddEvenList(ListNode* head) {
        if(!head){
            return nullptr;
        }
        else if(!head->next || !head->next->next){
            return head;
        }
        ListNode* oddHead = nullptr;ListNode* evenHead = nullptr;
        ListNode* odd = nullptr;ListNode* even = nullptr;
        ListNode* temp = head;
        int i = 1;
        while(temp){
            if(i%2 != 0){
                insertLL(oddHead,odd,temp->val);
            }
            else{
                insertLL(evenHead,even,temp->val);
            }
            temp = temp->next;
            i++;
        }
        if(odd)
            odd->next = evenHead;
        return oddHead;
    }
};