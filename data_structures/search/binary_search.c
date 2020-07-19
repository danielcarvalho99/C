#include <stdio.h>

int binarySearch(int* array, int value, int low, int high){
    
    while(low <= high){

        int middle = low +  (high -low)/2;

        if (array[middle] == value) {
            return middle;   
            }
        else if (array[middle] < value){
            low = middle + 1;
        } 
        else {
            high = middle - 1;
        }

    }

    return -1;

}
