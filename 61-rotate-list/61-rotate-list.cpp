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
    ListNode* rotateRight(ListNode* head, int k) {
        int len = 0;
        ListNode *temp = head;
        while(temp){
            temp = temp->next;
            len++;
        }
        if(len == 0 || len == 1) return head;
        k %= len;
        if(k==0) return head; // no rotation needed
        
        int diff = len-k;
        
        ListNode* root;
        
        temp = head;
        while(diff>1){
            temp = temp->next;
            diff--;
        }
        
        root = temp->next;
        temp->next = nullptr;
        
        temp = root;
        while(temp->next){
            temp = temp->next;
        }
        
        temp->next = head;
        return root;
        
        
    }
};