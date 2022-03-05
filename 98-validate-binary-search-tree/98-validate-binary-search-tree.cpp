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
    bool isBST(TreeNode* root, TreeNode* min, TreeNode* max){
        if(root == nullptr) return true;
        
        bool isLeftBST = isBST(root->left, min, root);
        bool isRightBST = isBST(root->right, root, max);
        return isLeftBST && isRightBST && (min==nullptr || root->val > min->val) && (max==nullptr || root->val < max->val);
    }
    
    bool isValidBST(TreeNode* root) {
        return isBST(root, nullptr, nullptr);
    }
};