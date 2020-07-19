#include <stdio.h>
int main(){

char ec;
printf("Estado civil, digite a inicial do seu: ");
scanf("%c",&ec);

switch(ec){
case 'D':
case 'd': printf("Voce e divorciado");
break;
case 'C':
case 'c': printf("Voce esta casado");
break;
case 'S':
case 's': printf("Voce esta em um rolo com o sullivan");
break;
default: printf("nopes");


}




return 0;
}
