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
    void insert(ListNode*&list,ListNode*&listHead,ListNode*&node){
        if(!list){
            list = node;
            listHead = node;
        }
        else{
            list->next = node;
            list = node;
        }
    }
    ListNode* merge(ListNode* list1,ListNode* list2){
        ListNode* result = nullptr;ListNode*resultHead = nullptr;
        ListNode* temp1 = list1; ListNode* temp2 = list2;
        while(temp1 && temp2){
            if(temp1->val < temp2->val){
                insert(result,resultHead,temp1);
                temp1= temp1->next;
            }
            else{
                insert(result,resultHead,temp2);
                temp2 = temp2->next;
            }
        }
        while(temp1){
            insert(result,resultHead,temp1);
            temp1= temp1->next;
        }
        while(temp2){
            insert(result,resultHead,temp2);
            temp2 = temp2->next;
        }
        return resultHead;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size() == 0) return nullptr;
        else if(lists.size() == 1) return lists[0];
        ListNode* result = lists[0];
        for(int i=1;i<lists.size();i++){
            result = merge(result,lists[i]);
        }
        return result;
    }
};