/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void DFS(TreeNode* root,int&resSum,string currSum){
        if(!root->left && !root->right){
            currSum += root->val + '0';
            resSum += stoi(currSum);
        }
        if(root->left){
            //currSum += to_string(root->val);
            DFS(root->left,resSum,currSum+to_string(root->val));
        }
        if(root->right)
            DFS(root->right,resSum,currSum+to_string(root->val));
    }
    int sumNumbers(TreeNode* root) {
        int ans = 0;
        DFS(root,ans,"");
        return ans;
    }
};