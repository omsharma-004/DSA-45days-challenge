# Problem 1: Middle Node of Linked List

## Description

Given a singly linked list, write a function to return the middle node. If there are two middle nodes, return the second middle node.

## Solution

To find the middle node of the linked list, we use two pointers technique:

- Initialize two pointers, `slow` and `fast`, both starting from the head of the linked list.
- Move `fast` pointer by two nodes and `slow` pointer by one node in each iteration.
- When `fast` pointer reaches the end (`NULL`) of the linked list or just before the end (`NULL`) if the length is even, `slow` pointer will be at the middle node.
- Return the node pointed to by `slow`.

## Code

```cpp
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != NULL && fast->next != NULL) {
            fast = fast->next->next;
            slow = slow->next;
        }

        return slow;
    }
};
```
