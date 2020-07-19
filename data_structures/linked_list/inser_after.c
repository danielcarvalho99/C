#include <stdio.h>
#include <stdlib.h>

struct Node {

    int data;
    struct Node* link;

};

void append(struct Node** head, int new_data){

    // Allocate
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    struct Node* last = *head;
    // Insert data
    new_node -> data = 10;
    new_node -> link = NULL;

    if (*head == NULL){
        *head = new_node;
        return;
    }

    while(last->link != NULL){
        last = last-> link;
    }
    //Point last to new node
    last -> link = new_node;
    return;

}