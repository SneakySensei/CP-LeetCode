/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* a = headA;
        ListNode* b = headB;
        
        bool cycleA = false;
        bool cycleB = false;
        
        while(true){
            if(a==b) return a;
            if(a == nullptr){
                a = headB;
            } else{
                a = a->next;
            }
            if(b == nullptr){
                b = headA;
            } else{
                b = b->next;
            }
        }
        
        return nullptr;
    }
    
};