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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
     int length = 0;
     for(ListNode*temp=head;temp;temp=temp->next){
        length++;
     }
     cout<<length<<endl;
     int n1 = length - n;
     cout<<n1;
     ListNode*prev = head;
     int i = 0;
     for(ListNode*temp=head;temp;temp=temp->next){
        if(i == n1){
            if(temp == head){
                head = head->next;
                break;
            }
            prev->next = temp->next;
            break;
        }
        prev = temp;
        i++;
     }
     return head;
    }
};