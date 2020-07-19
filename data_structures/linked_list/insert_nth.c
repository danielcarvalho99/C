#include <stdio.h>
#include <stdlib.h>

struct Node {

    int data;
    struct Node* link;

};

void insert (struct Node* prev_node,int new_value){
        
        if (prev_node->link == NULL){
            return;
        }
        // Allocate
        struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
        // Save data
        new_node -> data = 10;
        // Make point to next node
        new_node -> link = prev_node -> link ;
        // Make prev point to new
        prev_node -> link = new_node;
    
}