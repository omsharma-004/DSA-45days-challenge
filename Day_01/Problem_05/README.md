# Problem: Remove Linked List Elements

## Description

Given a singly linked list, remove all nodes that have a specified value. The function should modify the linked list in-place and return the head of the modified list.

## Approach

To remove elements from the linked list based on a given value:

- Initialize two pointers: `current` to traverse the list and `previous` to keep track of the previous node.
- Handle special cases where the head of the list matches the value using a `while` loop.
- Traverse the list with a `while` loop, updating pointers to skip nodes with the specified value.
- Properly manage memory by deleting nodes that are removed.

## Implementation

```cpp
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

## Explanation
- **Initialization:** `head` is checked and adjusted initially if it matches `val`, ensuring the function handles cases where the first node(s) match.
- **Traversal and Removal:** The function iterates through the linked list using `current` and `current->next` pointers. When a node with `val` is found, it is removed by adjusting pointers and deleting the node.
- **Memory Management:** Nodes are properly deleted (`delete temp`) after they are removed from the list to prevent memory leaks.
- **Return:** The modified `head` pointer is returned, which now points to the head of the linked list after all nodes with `val` have been removed.
This approach has O(n) time complexity, where n is the number of nodes in the linked list, and O(1) space complexity since we use only a constant amount of extra space regardless of the input size.
```
