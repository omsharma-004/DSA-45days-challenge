# Problem: Detect Cycle in Linked List

## Description

Given a singly linked list, determine if it has a cycle in it. A cycle is defined as having at least one node that points back to a previous node in the list.

## Approach

To detect a cycle in a linked list, we can use the "two pointers" technique:

- Initialize two pointers, `slow` and `fast`, both starting from the head of the linked list.
- Move `slow` one step at a time (`slow = slow->next`).
- Move `fast` two steps at a time (`fast = fast->next->next`).
- If there is a cycle, `slow` and `fast` will eventually meet at some point during their traversal.
- If `fast` reaches the end of the list (`NULL`), it means there is no cycle.

## Implementation

```cpp
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
```

## Explanation:

- **Initialization:** `slow` and `fast` pointers are initialized to the beginning of the linked list (`head`).
- **Traversal:** `slow` moves one step at a time (`slow = slow->next`), while `fast` moves two steps at a time (`fast = fast->next->next`).
- **Cycle Detection:** If `slow` equals `fast` during traversal, a cycle is detected (`if (slow == fast)`), and true is returned. If `fast` reaches the end of the list (`NULL`), indicating no cycle, `false` is returned (`return false;`).
  This approach has O(1) space complexity and O(n) time complexity, where n is the number of nodes in the linked list.
