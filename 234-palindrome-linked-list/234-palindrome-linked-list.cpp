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
    bool isPalindrome(ListNode* head) {
        int len = 0;
        ListNode *temp = head;
        while(temp){
            len++;
            temp=temp->next;
        }
        
        int mid = len/2;
        
        ListNode *curr = nullptr;
        temp = head;
        
        while(mid--){
            ListNode* t = temp->next;
            temp->next = curr;
            curr = temp;
            temp = t;
        }
        
        if(len%2==1){
            temp=temp->next;
        }
        
        while(curr && temp){
            if(curr->val != temp->val) return false;
            curr = curr->next;
            temp = temp->next;
        }
        
        
        return true;
    }
};