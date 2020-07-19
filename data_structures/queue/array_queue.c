#include <stdio.h>
#include <stdlib.h>

struct Queue{

    int rear,front,size;
    unsigned int capacity;
    int* array;

};

struct Queue* newQueue(unsigned int capacity){

    struct Queue* newQueue = (struct Queue*)malloc(sizeof(struct Queue));
    newQueue->array = (int*)malloc(newQueue->capacity * sizeof(int));
    
    newQueue->capacity = capacity;
    newQueue->front = newQueue -> size = 0;
    newQueue->rear = capacity -1 ;
    return newQueue;
};

