#include <stdio.h>
#include <stdlib.h>

struct Node {

    int data;
    struct Node* link;

};

void delete(struct Node** head, int key){

    struct Node* temp = *head,*prev;

    if (temp !=NULL && temp->data == key){
        *head = temp-> link;
        free(temp);
        return;

    }

while(temp != NULL && temp-> data != NULL){
    
    prev = temp;
    temp = temp->link;

}

if (temp == NULL){
    return ;
}

prev->link = temp -> link;
       
free(temp);


}