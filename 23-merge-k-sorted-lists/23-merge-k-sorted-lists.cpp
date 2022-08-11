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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        // Should actually be replaced by a max heap that
        // returns the ListNode* with minimum value
        // using a custom compare function
        vector<ListNode*> pointers;
        for(auto x: lists){
            pointers.push_back(x);
        }
        ListNode* root = new ListNode(INT_MIN);
        ListNode* curr = root;
        while(true){
            int minIndex = getMin(pointers);
            
            if(minIndex >= 0){
                curr->next = pointers[minIndex];
                curr = curr->next;
                pointers[minIndex] = pointers[minIndex]->next;
            } else break;
        }
        
        return root->next;
    }
    
    int getMin(vector<ListNode*>& pointers){
        ListNode* currMin = nullptr;
        int minIndex = -1;
        for(int i = 0; i<pointers.size(); i++){
            
            if(pointers[i] && (!currMin || pointers[i]->val < currMin->val)){
                currMin = pointers[i];
                minIndex = i;
            }
        }
        
        return minIndex;
    }
};