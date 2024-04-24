#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// fazer uma matriz que calcule e imprima a soma de todos os elementos da matriz
int main(){

int mat[5][7];
int soma = 0;
int i=0,j=0;

srand(time(NULL));

    for(i=0 ; i< 5 ; i++ ){
        for(j=0; j<7 ; j++){

            mat[i][j] = rand()% 100;

        }
    }

    for( i =0; i<5 ; i++){
        for(j=0; j<7; j++){

            soma+= mat[i][j];
            printf("%2d ", mat[i][j] );

        }
        printf("\n");
    }

    printf("\n\nA soma de todos os elementos : %d ", soma);

return 0;
}
