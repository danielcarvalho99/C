#include <stdio.h>
#include <stdlib.h>

struct Node {

    int data;
    struct Node* link;

};

void push (struct Node** head, int new_value){

    // Allocate
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    // Point to values
    new_node-> data = new_value;
    new_node-> link = *head;
    // Move the head to link to new node
    *head = new_node;

}




