#include <stdio.h>
#include <stdlib.h>

struct Stack {

   int top;
   unsigned int capacity;
   int* array;

};

struct Stack* createStack(unsigned capacity) 
{ 
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack)); 
    stack->capacity = capacity; 
    stack->top = -1; 
    stack->array = (int*)malloc(stack->capacity * sizeof(int)); 
    return stack; 
} 

int top (struct Stack* stack ){
   printf("The top is %d\n",stack->array[stack->top]);
   return stack->array[stack->top];
}

int isEmpty(struct Stack* stack){
   if(stack->top == -1 ) return 1;
   else return 0;
}

int push(struct Stack* stack,int value){

   if(stack->top == (stack -> capacity) - 1 ){
      return -1;
   }
   stack->top = (stack->top) + 1;
   stack->array[stack->top] = value ;

   printf("%d inserted\n",value);

   return stack->array[stack->top];

}

int pop(struct Stack* stack){

   if(isEmpty(stack)) return -1;
   
   printf("%d removed from the top\n",stack->array[stack->top]);
   stack->top = stack->top -1;
   return stack->array[stack ->top];

}

int main(void){

      struct Stack* stack = createStack(5);

      push(stack,2);
      push(stack,4);
      push(stack,8);
      top(stack);
      pop(stack);
      top(stack);

  return 0;   
}