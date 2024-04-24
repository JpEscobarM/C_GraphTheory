#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/*imprimir na tela a diagonal principal de uma matriz

*/


int main(){


    int m[5][5],i , j;

    srand(time(NULL));

    for(i = 0; i< 5 ; i++ ){
        for( j = 0 ; j< 5 ; j++){

            m[i][j] = rand() % 100 ;

        }

    }

    for(i = 0; i< 5 ; i++ ){
        for( j = 0 ; j< 5 ; j++){


            printf(" %2d", m[i][j]);

        }
        printf("\n");

    }
    printf("\n\n");


    for(i = 0 ; i < 5 ; i++){
        for(j = 0 ; j< 5 ; j++){
            if( i == j ){
                printf(" %2d", m[i][j]);
            }
            else{
                printf("   ");
            }

        }
        printf("\n");

    }


return 0;
}
