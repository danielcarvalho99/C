#include <stdio.h>

int main(void){

    //Detector de números primos
    printf("Digite um numero:\n");
    
    int n;
    int divisores = 0;

    scanf("%d",&n);

    printf("Divisores do numero:\n");

    for(int i = 1; i <= n; i ++){

        if(n%i == 0){

            divisores++;
            printf("%d\n",i);
        }

    }

    if(divisores == 2){
        printf("\nO numero e primo");
    }
    else{
        printf("\nO numero nao e primo\n");
    }


    return 0;
}