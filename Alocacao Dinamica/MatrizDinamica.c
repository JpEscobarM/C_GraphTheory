#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(NULL));
    int **m, i , j;



    m = malloc(10 * sizeof(int*));

    for( i = 0 ; i < 10 ; i ++ ){

        m[i] = malloc(10 * sizeof( int));

    }

    for( i = 0 ; i < 10 ; i ++ ){
        for ( j = 0 ; j<10 ; j ++){
            m[i][j] = rand() %100;
        }
    }


    for( i = 0 ; i < 10 ; i ++ ){
        for ( j = 0 ; j<10 ; j ++){
            printf("|%3d" , m[i][j]);
        }
        printf("\n");
    }

return 0;
}
