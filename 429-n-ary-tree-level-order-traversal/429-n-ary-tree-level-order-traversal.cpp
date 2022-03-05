/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        if(root == nullptr) return {};
        vector<vector<int>> res = {{root->val}};
        
        for(auto x: root->children){
            vector<vector<int>> temp = levelOrder(x);
            
            
            for(int i = 0; i<temp.size(); i++){
                if(i+1<res.size()){
                    for(auto n: temp[i]){
                        res[i+1].push_back(n);
                    }
                } else {
                    res.push_back(temp[i]);
                }
            }
        }
        return res;
    }
};