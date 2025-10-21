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
    ListNode* deleteDuplicates(ListNode* head) {
        /* unordered_map<int, int> freq;
        ListNode* temp = head;
        while (temp != nullptr) {
            freq[temp->val]++;
            temp = temp->next;
        }
        ListNode* temp1 = head;
        while (temp1 != nullptr) {
            if (freq[temp1->val] > 1) {
                 freq[temp1->val]--;
                if (temp1 == head) {
                    head = head->next;
                    delete temp1;
                } else {
                    ListNode* temp2 = head;
                    while (temp2->next != temp1) {
                        temp2 = temp2->next;
                    }
                    ListNode* temp3 = temp2->next;
                    temp2->next = temp2->next->next;
                    delete temp2;
                }
            }
            temp1 = temp1->next;
        }
        return head; */
        /* vector<int>ll;
        ListNode*temp1 = head;
        while(temp1 != nullptr){
            ll.push_back(temp1->val);
            temp1 = temp1->next;
        }
        unordered_set<int>a(ll.begin(),ll.end());
        int i =0;
        while(!a.empty()){
            if(i == 0)
        } */
        set<int> a;
        ListNode* temp = head;
        while (temp != nullptr) {
            a.insert(temp->val);
            temp = temp->next;
        }
        ListNode* head1;
        for (auto it = a.begin(); it != a.end(); it++) {
            ListNode* n = new ListNode(*it);
            if (head1 == nullptr) {
                head1 = n;
            } else {
                ListNode* temp1 = head1;
                while (temp1->next != nullptr) {
                    temp1 = temp1->next;
                }
                temp1->next = n;
            }
        }
        return head1;
    }
};