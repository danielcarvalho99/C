#include <stdio.h>

// melhor caso O(n) pior caso O(n^2)
void insertion (int n,int *v){

    int i,j,tmp;

    for (i = 1 ; i < n; i++){

        tmp = v[i];
        for (j = i; (j>0) && (tmp< v[j -1]);j--){
            v[j] = v[j - 1];
        }
        v[j] = tmp;
    }
}

int main (void){

    int i,n;

    printf("Digite quantos numeros seu vetor tera: ");
    scanf("%d",&n);

    int v[n];

    printf("Digite os valores presentes em seu vetor");
    
    for (i = 0; i < n; i++ ){
        scanf("%d",&v[i]);
    }

    insertion(n,v);

    printf("Lista ordenada em ordem crescente: ");

    for (i = 0;i<n;i++){
    
    
    printf("%d,",v[i]);
    
    }

    return 0;
}