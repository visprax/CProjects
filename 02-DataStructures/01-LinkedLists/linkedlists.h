#ifndef LINKEDLISTS_H
#define LINKEDLISTS_H

// Node struct for a singly linked list
typedef struct SingleNode {
    double data;
    // have to use struct here, as the type alias SingleNode 
    // hasn't yet become visible until the end is reached!
    struct SingleNode* next; 
} SingleNode;

typedef struct DoubleNode {
    double data;
    struct DoubleNode* next;
    struct DoubleNode* prev;
} DoubleNode;

typedef struct SinglyLinkedList {
    SingleNode* head;
} SinglyLinkedList;

typedef struct DoublyLinkedList {
    DoubleNode* head;
} DoublyLinkedList;

#endif // LINKEDLISTS_H
