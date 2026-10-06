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
    TreeNode* ArrayToBST(vector<int>& nums,int s,int e){
        int mid = s+(e-s)/2;
        if(s>e){
            return NULL;
        }

        TreeNode* root = new TreeNode(nums[mid]);

        root->left = ArrayToBST(nums,s,mid-1);
        root->right = ArrayToBST(nums,mid+1,e);

        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        
        int s =0;
        int e = nums.size()-1;

        return ArrayToBST(nums,s,e);
    }
};