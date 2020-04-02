#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bubble(int n, int *v){

    int j,k;

    for (j = n-1 ; j >0 ; j--){

    for(k = 0; k < j ; k++){
        if (v[k] > v[k + 1]){
        int temp = v[k];
        v[k] = v[k + 1];
        v[k + 1] = temp;
        }
        }
    }
}


int main (void){

    printf("Quantos elementos você quer que exista no seu array:\n");

    srand(time(NULL));
    int n;

    scanf("%d",&n);

    int *v;
    
    v = (int*)malloc (n * sizeof(int));

    for (int i = 0; i < n ; i++){

        v[i] = rand()%(n-1);
        printf("%d,",v[i]);

    }

    printf("\n");

    bubble(n,v);


    for (int i = 0; i < n ; i++){

        if(v[i] == v[i+1]){
            
            printf("O número %d se repete\n",v[i]);
        }

    }

    
    return 0;
}