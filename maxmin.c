#include <stdio.h>

int main (){

int i,n;
int v[n];

printf("Quantos numeros tera seu vetor: ");
scanf("%d",&n);
printf("Digite os valores do seu vetor: ");

for (i = 0; i < n; i++){
    scanf("%d",&v[i]);
}

printf("Os valores do seu vetor sao: [");

for (i = 0; i < n; i++){

    if(i !=n-1)
    printf("%d,",v[i]);
    else
    printf("%d]\n",v[i]);

}

int min = 100000;

//determinar o minimo

for (i = 0; i < n; i++){

if(v[i] < min )
    min = v[i];
}

printf("\nNo final, o valor minimo do vetor foi %d\n",min);

int max = 0;

for (i = 0; i < n; i++){

    if(v[i] > max)
        max = v[i];

}

printf("\nNo final, o valor maximo do vetor foi de %d\n",max);

return 0;
}
