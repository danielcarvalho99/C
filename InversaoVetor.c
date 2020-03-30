#include <stdio.h>
#include <stdlib.h>

int main (void){

    //Invertendo um vetor

    int n;
    int *v;
    v = (int*)malloc(n * sizeof(int));

    printf("Digite o número de elementos que o vetor terá:\n");
    scanf("%d",&n);

    printf("Digite os valores para seu vetor:\n");

    if(v == NULL){
        exit(1);
    }

    for (int i = 0; i < n ; i++){
        scanf("%d\n",&v[i]);
    }

    printf("Os números presentes em seu vetor são:\n");    

    for (int i = 0; i < n  ; i++){
        printf("%d",v[i]);
    }

    printf("\nSeu vetor invertido é:\n"); 

    for (int i = n-1; i > -1  ; i--){
        printf("%d",v[i]);
    }

    




    return 0;
}