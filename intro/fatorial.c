#include <stdio.h>
#include <stdlib.h>
int main() {

int numero;
int i;
int fatorial = 1;

printf("escolha o um numero: ");

scanf("%d",&numero);

for (i = numero; i > 0; i--){

    fatorial = fatorial * i;
    printf("\n O valor de i e  %d \n\n",i);
    printf(" O fatorial nesse momento e: %d\n",fatorial);

}

printf("\n\n O fatorial foi %d",fatorial);

return 0;
}
