#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
programa pra calcular uma matriz transposta5x4
*/

int main(){

    int tamL=5 , tamC=4;

    int i , j, mat[tamL][tamC], trans[tamC][tamL];

    srand(time(NULL));

    for( i = 0 ; i< tamL ; i++){
        for( j = 0; j< tamC ; j++){

            mat[i][j] = rand() %100;

        }
    }

    for( i = 0 ; i< tamL ; i++){
        for( j = 0; j< tamC ; j++){

            printf(" %3d", mat[i][j]);

        }
        printf("\n");
    }

    for(i=0 ; i<tamL ; i++){
        for(j = 0 ; j<tamC ; j++){


                    }

    }

return 0 ;
}
