#include <stdio.h>

int linearSearch(int* array,int value){

    int i;

    for(i = 0;i < sizeof(array);i++ ){

        if(value == array[i]) return i;

    }

    return -1;
}

int main(void){

    int numbers[5] = {2,4,6,8,10};

    int result = linearSearch(numbers,10);
    printf("%d\n",result);
    return 0;
}