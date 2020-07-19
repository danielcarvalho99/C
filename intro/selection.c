#include <stdio.h>

 void Selection (int *v, int n){

     int i,j,tmp;

     for (i = 0 ; i < n  ; i++){

         int iMin = i; //candidato à mínimo

         for( j = i + 1 ; j < n ; j++){

             if (v[iMin] > v[j]){

                 iMin = j; //atualiza-se o índice do iMin

             }
         }
        tmp = v[i];
        v[i] = v[iMin];
        v[iMin] = tmp;
     }
}

int main (void){

    int i,n;


    printf("Quantos numeros tera seu vetor: ");
    scanf("%d",&n);

    int v[n];

    printf("Digite os valores do seu vetor: ");

    for(i = 0; i < n ; i++){

        scanf("%d",&v[i]);
    }

    Selection(v,n);

    printf("Lista ordenada em ordem crescente: ");

    for (i = 0;i<n;i++){
        printf("%d,",v[i]);
    }


    return 0;
}
