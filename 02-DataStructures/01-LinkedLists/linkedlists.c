#include <stdlib.h>
#include <stdio.h>

#include "linkedlists.h"

void add_single_node(SinglyLinkedList* slist, double data) {
    SingleNode* new_snode = (SingleNode*)malloc(sizeof(SingleNode));
    new_snode->data = data;
    new_snode->next = NULL; // this is the latest node we have added


}

void add_double_node(DoublyLinkedList* dlist, double data) {
    DoubleNode* new_dnode = (DoubleNode*)malloc(sizeof(DoubleNode));
    new_dnode->data = data;
    new_dnode->next = dlist->head;


}

int main() {
    SingleNode snode;
    snode.data = 1.0;
    snode.next = NULL;

    DoubleNode dnode;
    dnode.data = 2.0;
    dnode.next = NULL;
    dnode.prev = NULL;


    printf("%lf\n", snode.data);
    printf("%lf\n", dnode.data);
    return 0;
}
