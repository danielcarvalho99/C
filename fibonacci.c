#include <stdio.h>

int main(void){

    int n1 = 0,n2 = 1,n3,tmp,total;

    printf("Digite quantos numeros da sequência de Fibonnaci você quer:\n");
    scanf("%d",&total);

    printf("Os números são:\n0\n1\n");

    for ( int i = 0; i < total - 2 ; i++){

        n3 = n1 + n2;
        tmp = n2;
        n2 = n3;
        n1 = tmp;
        
        printf("%d\n",n3);

    }



    return 0;
}