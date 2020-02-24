#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

srand(time(NULL));
int n ;
printf("Quantas vezes voce quer q jogue a moeda? ");
scanf("%d",&n);
int *v;
v = (int*) malloc(n* sizeof(int));

int i,alt = 1,altmax = 0,caras = 0,coroas = 0;
// 0 e cara e 1 e coroa


printf("Serao lancadas %d moedas\n ",n);


for (i = 0; i < n; i++){

        v[i] = rand()%2;

        printf("%d,",v[i]);

        if(v[i] == 0)
        {
                caras++;
        }
        else
        {
                coroas++;
        }

}

    for (i = 0; i < n - 1 ; i++){

        if (v[i] != v[i + 1] )
            alt = alt +1;
        else
            alt = 1;
        if(alt > altmax)
            altmax = alt ;
    }


printf("\n%d caras e %d coroas a sequencia alternada maxima foi %d",caras,coroas,altmax);

free(v);

return 0;


}
