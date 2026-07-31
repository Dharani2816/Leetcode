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
    void DFS(TreeNode* parent,TreeNode* root,int&sum){
       if(!root) return;
       // if it doesnt contain left and right child then it is null but how do we know if it is a left or right leave?
       if(!root->left && !root->right){
            if(parent && parent->left == root){
                sum+=root->val;
            }
            return;
       }
       DFS(root,root->left,sum);
       DFS(root,root->right,sum);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        int sum = 0;
        DFS(nullptr,root,sum);
        return sum;
    }
};