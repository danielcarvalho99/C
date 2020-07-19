#include <stdio.h>

int main (void){

int n,e;
printf("escolha o numero que voce quer elevado a outro:");
scanf("%d %d",&n,&e);

void pow (int a,int b ){

int i = 0, r = 1;

    for (i = 0; i < b; i++){

    r = r*a;

    }

    printf("%d",r);

}



pow(n,e);

return 0;
}
