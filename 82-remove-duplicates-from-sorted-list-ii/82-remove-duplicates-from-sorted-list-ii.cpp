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
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *root = new ListNode(INT_MIN, head);
        
        ListNode *slow = root;
        ListNode *fast = slow->next;
        
        while(fast){
            while(fast->next && fast->next->val == fast->val){
                fast = fast->next;
            }
            if(slow->next != fast){
                slow->next = fast->next;
                fast = slow->next;
            } else {
                slow = fast;
                fast = slow->next;
            }
        }
        
        return root->next;
    }
};