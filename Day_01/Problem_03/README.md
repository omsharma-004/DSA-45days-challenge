# Problem: Convert Binary Number in a Linked List to Integer

## Description

Given a singly linked list where each node represents a binary digit (0 or 1), convert this linked list into an integer value. The integer value is formed by interpreting the linked list in reverse order from the head to tail.

## Approach

To convert the binary representation in the linked list to an integer:

- Initialize a variable `decimal_value` to store the resulting decimal value, starting from 0.
- Traverse the linked list from head to tail:
  - Multiply the current `decimal_value` by 2 (left shift operation) and add the current node's value (`decimal_value = decimal_value * 2 + current->val`).

## Implementation

```cpp
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
```
## Explanation:

- **Initialization:** `decimal_value` is initialized to 0 to store the result of the conversion.
- **Traversal:** The linked list is traversed using the `current` pointer, starting from `head`.
- **Conversion:** In each iteration, `decimal_value` is updated by left-shifting (`* 2`) and adding the current node's value (`+ current->val`), which effectively builds the integer representation of the binary linked list.
- **Return:** Finally, `decimal_value` is returned as the integer representation of the linked list.

This approach has O(n) time complexity, where n is the number of nodes in the linked list, and O(1) space complexity since we only use a constant amount of extra space regardless of the input size.
