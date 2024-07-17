# Problem: Middle of the Linked List

## Description

Given a singly linked list, find the middle node. If there are two middle nodes, return the second middle node.

## Approach

To find the middle node of the linked list efficiently:

- Use two pointers, `slow` and `fast`, initialized to the head of the linked list.
- Traverse the list with `fast` moving two steps at a time and `slow` moving one step at a time.
- When `fast` reaches the end of the list (`NULL` or `NULL->next`), `slow` will be at the middle node.

## Implementation

```cpp
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
```
## Explanation
- **Initialization:**
    - `slow` and `fast` pointers are initialized to the head of the linked list (`head`). This sets up the pointers for traversal.
- **Traversal Logic:**
    - The while loop continues as long as `fast` pointer and `fast->next` pointer are not `NULL`. This ensures safe traversal without causing null pointer exceptions.
    - In each iteration:
        - `fast = fast->next->next;` moves `fast` two steps ahead.
        - `slow = slow->next;` moves `slow` one step ahead.
    - This effectively makes `slow` traverse half the speed of `fast`, leading `slow` to the middle node when `fast` reaches the end of the list.
- **Return:**
    - After the loop terminates (`fast` reaches `NULL` or `fast->next` reaches `NULL`), `slow` points to the middle node of the linked list (or the second middle node if the list has an even number of nodes).
