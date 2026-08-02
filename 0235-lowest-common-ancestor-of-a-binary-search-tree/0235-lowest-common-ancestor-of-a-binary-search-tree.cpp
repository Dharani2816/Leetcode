/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    void DFS(TreeNode* root,stack<TreeNode*>&ancestor,TreeNode* node){
        TreeNode* temp = root;
        while(temp){
            if(temp->val == node->val){
                ancestor.push(temp);
                break;
            }
            else if(temp->val < node->val){
                ancestor.push(temp);
                temp = temp->right;
            }
            else{
                ancestor.push(temp);
                temp = temp->left;
            }
        }
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        stack<TreeNode*>p_ancestor;
        stack<TreeNode*>q_ancestor;
        DFS(root,p_ancestor,p);
        DFS(root,q_ancestor,q);
        unordered_map<TreeNode*,bool>isAncestor;
        while(!p_ancestor.empty()){
            isAncestor[p_ancestor.top()] = true;
            p_ancestor.pop(); 
        }
        TreeNode* result = nullptr;
        while(!q_ancestor.empty()){
            if(isAncestor[q_ancestor.top()]){
                result = q_ancestor.top();
                break;
            }
            q_ancestor.pop();
        }
        return result;
    }
};