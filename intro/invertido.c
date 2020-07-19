#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (void){

    int n;
    
    int *v;
    
    
    printf("Digite quantos numero tera seu numero final\n");
    scanf("%d",&n);

    v = (int*)malloc(n * sizeof(int));

    printf("Qual sera seu numero\n");

    
    for (int i = 0; i <n; i++){

        scanf("%d",&v[i]);

    }

    printf("O numero invertido sera: ");

    for (int i = n-1; i >= 0; i--){

        printf("%d",v[i]);

    }



    return 0;
}