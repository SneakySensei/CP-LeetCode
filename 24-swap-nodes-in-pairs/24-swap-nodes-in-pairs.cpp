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
    ListNode* swapPairs(ListNode* head) {
        if(!head || !head->next) return head;
        
        ListNode *root = new ListNode();
        root->next = head;
        
        ListNode *prev = root;
        ListNode *curr = root->next;
        
        
        while(curr && curr->next){
            ListNode *temp = curr->next; // 2
            curr->next = curr->next->next; // 1 to 3
            
            temp->next = curr; // 2 to 1
            prev->next = temp; // prev to 2
            
            prev = curr;
            curr = prev->next;
        }
        
        return root->next;
    }
    
};