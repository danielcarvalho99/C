#include <stdio.h>
#include <stdlib.h>

struct Node {

    int data;
    struct Node* next;
    struct Node* prev;
};


void insertAtHead (struct Node** head,int new_data){

    // Allocate
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    struct Node* start = *head;
    // Insert data
    new_node -> data = new_data;
    // Point to next
    new_node -> next = start;
    // Point to previous
    new_node -> prev = NULL;
    // Make start point to new_node as previous
    start -> prev = new_node;
    // Make head point to new_node
    *head = new_node;


}