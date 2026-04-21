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
    int sum = 0;
    bool ans = false;
    void preorder(TreeNode* root,int tsum){
        if(root != nullptr){
            sum += root->val;
            if(!root->left && !root->right){
                if(tsum == sum){
                    ans = true;
                    return;
                }
            }
            preorder(root->left,tsum);
            if(root->left)
                sum -= root->left->val;
            preorder(root->right,tsum);
            if(root->right)
                sum -= root->right->val;
        }
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        preorder(root,targetSum);
        return ans;
    }
};