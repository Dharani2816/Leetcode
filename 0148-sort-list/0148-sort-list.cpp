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
    ListNode* sortList(ListNode* head) {
        vector<int>v;
        for(ListNode* temp = head;temp;temp=temp->next){
            v.push_back(temp->val);
        }
        sort(v.begin(),v.end());
        ListNode* temp = head;
        for(int i =0;i<v.size();i++){
            temp->val = v[i];
            if(temp)
                temp = temp -> next;
        }
        return head;
    }
};