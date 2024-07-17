class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        // Handle cases where the head itself has the value val
        while (head != NULL && head->val == val) {
            ListNode* temp = head;  // Store the current head in temp
            head = head->next;      // Move head to the next node
            delete temp;            // Delete the old head (free memory)
        }
        
        ListNode* current = head;   // Start with head as current
        
        // Traverse through the list to remove nodes with value val
        while (current != NULL && current->next != NULL) {
            if (current->next->val == val) {
                ListNode* temp = current->next;   // Store the node to be deleted in temp
                current->next = temp->next;       // Skip over the node to be deleted
                delete temp;                      // Delete the node (free memory)
            } else {
                current = current->next;          // Move to the next node
            }
        }
        
        return head;  // Return the modified head of the list
    }
};

