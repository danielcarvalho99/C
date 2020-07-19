#include <stdio.h>
#include <stdlib.h>

struct Node {

    int data;
    struct Node* link;

};
// Local variables must me referenced through pointers
void reverse(struct Node** head){

    struct Node* next = (struct Node*)malloc(sizeof(struct Node));
    struct Node* last = *head;
    struct Node* prev = NULL;

    while(last -> link != NULL){

        next = last->link;
        last-> link = prev; 
        next->link = last;
        last = next;

    }

    *head = prev;

}

