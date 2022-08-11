/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        unordered_map<int, Node*> pos;
        Node* temp = head;
        int i=0;
        
        // store position of all nodes' random ptr
        while(temp){
            pos[i] = temp->random;
            
            i++;
            temp = temp->next;
        }
        
        Node *root = new Node(INT_MIN);
        Node *curr = root;
        
        temp = head;
        
        cout << "passed";
        
        unordered_map<Node*, Node*> oldNewMap;
        while(temp){
            Node *n = new Node(temp->val);
            oldNewMap[temp] = n;
            
            curr->next = n;
            
            curr = curr->next;
            temp = temp->next;
        }
        
        
        i = 0;
        curr = root->next;
        
        while(curr){
            curr->random = oldNewMap[pos[i]];
            i++;
            curr=curr->next;
        }
        
        return root->next;
        
    }
};