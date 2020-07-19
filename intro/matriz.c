#include <stdio.h>
#include <stdlib.h>

int main(void){


    int **m1, **m2,**mProduto;
    int i,j,n ;

    printf("Que tamanho nxn você quer sua matriz: \n");
    scanf("%d",&n);

    
    m1 = (int**) malloc( n * sizeof (int*));

    for(i = 0; i < n; i++){

         m1[i] = (int*) malloc (n * sizeof(int));
        
    }

    m2 = (int**) malloc( n * sizeof (int*));

    for(i = 0; i < n; i++){

         m2[i] = (int*) malloc (n * sizeof(int));
        
    }

    mProduto = (int**) malloc( n * sizeof (int*));

    for(i = 0; i < n; i++){

         mProduto[i] = (int*) malloc (n * sizeof(int));
        
    }

    

    printf("Digite os valores da sua primeira matriz: \n");

    for ( j = 0 ; j < n; j++){

        for (int k = 0; k < n ; k++){

                scanf("%d",&m1[j][k]);
            
        }
        
    
    }

    printf("Digite os valores da sua segunda matriz: \n");

    for (int j = 0; j < n; j++){

        for (int k = 0; k < n ; k++){

                scanf("%d",&m2[j][k]);
            
        }
        
    
    }

    


    printf("Vamos multiplicar essas duas matrizes: \n");

    for (i = 0; i < n; i ++){

        for( j = 0; j < n ; j++){

            for (int k = 0; k < n; k++){

                mProduto[i][j] = mProduto[i][j] + m1[i][k] * m2[k][j] ;
                
               
            }

            printf("%d",mProduto[i][j]);
        }
            printf("\n");
    }
      

     
    return 0;

    

    
}