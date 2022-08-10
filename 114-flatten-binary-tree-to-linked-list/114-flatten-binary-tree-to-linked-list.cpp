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
    void flatten(TreeNode* root) {
        if(!root || (!root->right && !root->left)) return;
        
        flatten(root->left);
        flatten(root->right);
        
        TreeNode *left = root->left;
        TreeNode *right = root->right;
        
        TreeNode *temp = left;
        while(temp && temp->right){
            temp = temp->right;
        }
        
        if(temp){
            temp->right = right;
            root->right = left;
            root->left = nullptr;
            return;
        } else {
            root->right = right;
            root->left = nullptr;
            return;
        }
        
        return;
    }
};