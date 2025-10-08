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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* temp1 = list1;
        ListNode* temp2 = list2;
        ListNode* list3;
        vector<int> ans;
        int i = 0;
        while (temp1 != nullptr) {
            ans.push_back(temp1->val);
            temp1 = temp1->next;
        }
        while (temp2 != nullptr) {
            ans.push_back(temp2->val);
            temp2 = temp2->next;
        }
        sort(ans.begin(), ans.end());
        for (int i = 0; i < ans.size(); i++) {
            if( i == 0){
                ListNode* temp = new ListNode(ans[i]);
                list3 = temp;
            }
            else{
                ListNode *temp1 = new ListNode(ans[i]);;
                ListNode* temp2 = list3;
                while(temp2->next != nullptr){
                    temp2 = temp2->next;
                }
                temp2->next = temp1;
            }
        }
        return list3;
    }
};