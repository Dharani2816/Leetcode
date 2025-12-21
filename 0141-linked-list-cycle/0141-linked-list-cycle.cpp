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
    bool hasCycle(ListNode *head) {
        unordered_map<ListNode*,int>node;
        ListNode* temp = head;
        while(temp != nullptr){
          node[temp] = 1;
          if(temp->next && node[temp->next]){
            return true;
          }
          temp = temp->next;  
        }
        return false;
    }
}; 