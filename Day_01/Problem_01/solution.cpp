class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;  // Initialize slow pointer at the head of the list
        ListNode* fast = head;  // Initialize fast pointer at the head of the list
        
        // Traverse the list with two pointers
        while (fast != NULL && fast->next != NULL) {
            fast = fast->next->next;  // Move fast pointer two steps ahead
            slow = slow->next;        // Move slow pointer one step ahead
        }
        
        return slow;  // Return the middle node or the second middle node in case of even number of nodes
    }
};

