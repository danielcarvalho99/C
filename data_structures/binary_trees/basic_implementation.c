#include <stdio.h>
#include <stdlib.h>

struct Node {

    int data;
    struct Node* left;
    struct Node* right;

};

struct Node* createTree (int data){

    struct Node* tree = (struct Node*)malloc(sizeof(struct Node));
    tree->data = data;
    tree->left = NULL;
    tree->right = NULL;

    return tree;

};

void main(){

    struct Node* tree = createTree(1);
    tree -> left = createTree(2);
    tree -> right = createTree(3);

    tree->left->left = createTree(4);

    printf("Node value: %d\n",tree->left->left->data);

    return ;
}