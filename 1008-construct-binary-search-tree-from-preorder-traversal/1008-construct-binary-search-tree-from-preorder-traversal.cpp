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
     TreeNode* insertIntoBST(TreeNode*&root, int val) {
        TreeNode* parent = nullptr;
        TreeNode* temp = root;
        TreeNode* node = new TreeNode(val);
        if(!root) return node;
        while(temp){
            if(val < temp->val){
                parent = temp;
                temp = temp->left;
            }
            else{
                parent = temp;
                temp = temp->right;
            }
        }
        if(parent){
            if(val < parent->val) parent->left = node;
            else parent->right = node;
        }
        return root;   
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        TreeNode* root = nullptr;
        for(int i=0;i<preorder.size();i++){
            root = insertIntoBST(root,preorder[i]);
        }
        return root;
    }
};