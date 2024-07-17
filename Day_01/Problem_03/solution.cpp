class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int decimal_value = 0;  // Initialize decimal value to store the result
        
        ListNode* current = head;  // Start traversing from the head of the linked list
        
        // Traverse the linked list and convert binary to decimal
        while (current != nullptr) {
            decimal_value = decimal_value * 2 + current->val;  // Update decimal value
            current = current->next;  // Move to the next node
        }
        
        return decimal_value;  // Return the final decimal value
    }
};
