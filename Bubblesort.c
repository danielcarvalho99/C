#include <stdio.h>
#include <stdlib.h>
//função que realiza a ordenação

void bolha (int n, int *v){

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
int main (){

int i,n;


printf("Quantos numeros tera seu vetor: ");
scanf("%d",&n);

int *v;
v = (int*)malloc(n * sizeof(int));

printf("Digite os valores do seu vetor: ");

for(i = 0; i < n ; i++){

    scanf("%d",&v[i]);
}


bolha(n,v);

printf("Lista ordenada em ordem crescente: ");

for (i = 0;i<n;i++){
    printf("%d,",v[i]);
}

return 0;
}
