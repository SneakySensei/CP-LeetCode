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
    int len(ListNode *head){
        int l = 0;
        while(head!=nullptr){
            l++;
            head=head->next;
        }
        return l;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* a = headA;
        ListNode* b = headB;
        
        int lenA = len(a);
        int lenB = len(b);
        if(lenA > lenB){
            int diff = lenA-lenB;
            while(diff--){
                a=a->next;
            }
        } else if(lenB>lenA){
            int diff = lenB-lenA;
            while(diff--){
                b=b->next;
            }
        }
        
        while(a && b){
            if(a == b) return a;
            a= a->next;
            b= b->next;
        }
        
        return a;
    }
    
};