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
    vector<int> rightSideView(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        vector<int>result;
        if(!root) return result;
        //result.push_back(root->val);
        while(!q.empty()){
            int levelSize = q.size();
            TreeNode* lastNode = nullptr;
            for(int i=0;i<levelSize;i++){
                lastNode = q.front();
                q.pop();
                if(lastNode->left) q.push(lastNode->left);
                if(lastNode->right) q.push(lastNode->right);
            }
            if(lastNode) result.push_back(lastNode->val);
        }
        return result;
    }
};