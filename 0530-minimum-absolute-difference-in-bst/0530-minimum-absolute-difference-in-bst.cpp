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
    vector<int>inorder;
    void inorderTraversal(TreeNode* root){
         if(root != nullptr){
            inorderTraversal(root->left);
            inorder.push_back(root->val);
            inorderTraversal(root->right);
        }
    }
    int getMinimumDifference(TreeNode* root) {
       inorderTraversal(root);
       int min = abs(inorder[0]-inorder[1]);
       for(int i=0;i<inorder.size();i++){
        for(int j=i+1;j<inorder.size();j++){
            int diff = abs(inorder[i]-inorder[j]);
            if(diff < min){
                min = diff;
            }
        }
       }
       return min;
    }
};