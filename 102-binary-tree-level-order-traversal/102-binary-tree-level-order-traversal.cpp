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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root==nullptr) return {};
        vector<vector<int>> res = {{root->val}};
        
        vector<vector<int>> left = levelOrder(root->left);
        vector<vector<int>> right = levelOrder(root->right);
        
        for(int i = 0; i<left.size(); i++){
            if(i+1 < res.size()){
                res[i+1].insert(res[i+1].end(), left[i].begin(), left[i].end());
            } else {
                res.push_back(left[i]);
            }
        }
        for(int i = 0; i<right.size(); i++){
            if(i+1 < res.size()){
                res[i+1].insert(res[i+1].end(), right[i].begin(), right[i].end());
            } else {
                res.push_back(right[i]);
            }
        }
        
        return res;
        
    }
};