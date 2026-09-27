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
    vector<vector<int>>ans;
    vector<int>path;
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {

        if(root==NULL){
            return ans;
        }

        path.push_back(root->val);

        //leaf node...
        if(root->left == NULL && root->right == NULL){
            if(targetSum == root->val){
                ans.push_back(path);
            }
        }

        //left and right subtree...
        pathSum(root->left,targetSum - root->val);
        pathSum(root->right,targetSum - root->val);

        //Backtacking...
        path.pop_back();

    return ans;
        
    }
};