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
    int pairSum(ListNode* head) {
       vector<int>a;
       for(ListNode*temp = head;temp!=nullptr;temp=temp->next){
        a.push_back(temp->val);
       }
       int left = 0;
       int maxSum = 0;
       int right = a.size()-1;
       while(left < right){
        int sum = a[left]+a[right];
        if(sum > maxSum){
            maxSum = sum;
        }
        left++;
        right--;
       }
       return maxSum;
    }
};