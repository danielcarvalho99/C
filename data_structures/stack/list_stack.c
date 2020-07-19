#include <stdio.h>
#include <stdlib.h>

struct Node{

    int data;
    struct Node* next;
};

struct Node* newNode(int new_data) 
{ 
    struct Node* newNode = (struct StackNode*)malloc(sizeof(struct Node)); 
    newNode->data = new_data; 
    newNode->next = NULL; 
    return newNode; 
}

int isEmpty(struct Node* head){

    return(!head);

}

void push(struct Node** root, int data) 
{ 
    struct Node* stackNode = newNode(data); 
    stackNode->next = *root; 
    *root = stackNode; 
    printf("%d pushed to stack\n", data); 
} 

int pop(struct Node** root) 
{ 
    if (isEmpty(*root)) 
        return ; 
    struct Node* temp = *root; 
    *root = (*root)->next; 
    int popped = temp->data; 
    free(temp); 
  
    return popped; 
} 

    




