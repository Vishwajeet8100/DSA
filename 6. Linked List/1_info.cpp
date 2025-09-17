/*
Linked List - Important Information

imp -> most of the times in linekd list you will while loop instead of for as you dont knwo when the linked list will end.

1. Definition:
    - A linked list is a linear data structure where elements (nodes) are stored in non-contiguous memory locations.
    - Each node contains data and a pointer/reference to the next node.

2. Types:
    - Singly Linked List: Each node points to the next node.
    - Doubly Linked List: Each node points to both the next and previous nodes.
    - Circular Linked List: Last node points back to the first node.

3. Basic Structure (Singly Linked List):
    struct Node {
         int data;
         Node* next;
    };

4. Operations:
    - Insertion (at beginning, end, or middle)
    - Deletion (by value or position)
    - Traversal (visiting each node)
    - Searching (finding a node with a specific value)
    - Reversal (reversing the linked list)

5. Advantages:
    - Dynamic size (no need to define size in advance)
    - Efficient insertions/deletions (especially at the beginning)

6. Disadvantages:
    - Random access is not possible (must traverse from head)
    - Extra memory for pointers

7. Applications:
    - Implementation of stacks and queues
    - Dynamic memory allocation
    - Adjacency lists in graphs

8. Time Complexity:
    - Insertion/Deletion at beginning: O(1)
    - Insertion/Deletion at end or middle: O(n)
    - Search: O(n)
    - Traversal: O(n)

9. Memory Usage:
    - Each node requires extra memory for storing the pointer/reference.

10. Common Interview Questions:
    - Reverse a linked list
    - Detect a cycle in a linked list (Floyd’s Cycle Detection)
    - Find the middle node
    - Merge two sorted linked lists
    - Remove duplicates

*/