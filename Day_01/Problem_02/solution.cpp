class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* slow = head;  // Initialize slow pointer at the head of the list
        ListNode* fast = head;  // Initialize fast pointer at the head of the list
        
        // Traverse the list with two pointers
        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;          // Move slow pointer one step forward
            fast = fast->next->next;    // Move fast pointer two steps forward
            
            if (slow == fast) {         // If slow and fast pointers meet, there's a cycle
                return true;            // Return true indicating cycle detected
            }
        }
        
        return false;  // Return false if fast pointer reaches the end (no cycle detected)
    }
};

