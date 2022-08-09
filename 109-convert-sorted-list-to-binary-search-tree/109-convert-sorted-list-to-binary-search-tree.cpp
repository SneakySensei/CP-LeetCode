/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    TreeNode* sortedListToBST(ListNode* head) {
        if(!head) return nullptr;
        if(!head->next) return new TreeNode(head->val);
        
        // roughly find mid;
        ListNode *slow = head;
        ListNode *fast = slow->next; // this will give us one less than the actual mid
        
        while(fast->next && fast->next->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        
        // break the LinkedList into 3 parts with head, mid, and right as their roots
        ListNode *mid = slow->next;
        slow->next = nullptr;
        
        ListNode *right = mid->next;
        mid->next = nullptr;
        
        // recursively get the left and right bst return the root for the current recursive call
        return new TreeNode(mid->val, sortedListToBST(head), sortedListToBST(right));
        
    }
};