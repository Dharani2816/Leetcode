/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(!root) return root;
        if(!root->left && !root->right) return root;
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            int levelSize = q.size();
            vector<Node*>a;
            for(int i=0;i<levelSize;i++){
                Node* temp = q.front();
                q.pop();
                a.push_back(temp);
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
            for(int i=0;i<a.size()-1;i++){
                a[i]->next = a[i+1];
            }
            a.clear();
        }
        return root;
    }
};