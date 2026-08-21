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
    bool checkTree(TreeNode* root) {
        queue<TreeNode*>q;
        int sum=0;

        if(root == NULL){
            return 0;
        }

        q.push(root);

        while(!q.empty()){
            TreeNode* temp = q.front();
            q.pop();

            if(temp->left != NULL){
                q.push(temp->left);
                sum+=temp->left->val;
            }
            if(temp->right != NULL){
                q.push(temp->right);
                sum+=temp->right->val;
            }

        }

        if(sum == root->val){
            return true;
        }

        return false;
    }
};