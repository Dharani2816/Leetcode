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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_map<ListNode*,int>l1;
        for(ListNode*temp = headA;temp != nullptr;temp = temp->next){
            l1[temp] = 1;
        }
        ListNode* intersectedNode = nullptr;
        for(ListNode*temp = headB;temp != nullptr;temp = temp->next){
            cout<<l1[temp]<<endl;
            if(l1[temp]){
                intersectedNode = temp;
                break;
            }
        }
        return intersectedNode;
    }
};