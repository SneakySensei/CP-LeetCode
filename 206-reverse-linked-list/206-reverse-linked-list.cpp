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
    ListNode* reverseList(ListNode* head) {
        if(!head || !head->next) return head;
        
        ListNode *curr = head;
        ListNode *temp = head->next;
        curr->next = nullptr;
        
        while(temp){
            ListNode *t = temp->next;
            temp->next = curr;
            curr = temp;
            temp = t;
        }
        
        return curr;
    }
};