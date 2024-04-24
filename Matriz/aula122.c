#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
int tam = 25;
int m[tam][tam], i , j;
srand(time(NULL));


for ( i = 0; i< tam ; i++){

    for ( j = 0 ; j < tam ; j++){

        m[i][j] = rand()%100;

    }
}


for(i = 0; i< tam; i++ ){
        for( j = 0 ; j< tam ; j++){


            printf(" %2d", m[i][j]);

        }
        printf("\n");

    }
printf("\n\n");

    for(i = 0; i< tam ; i++ ){
        for( j = 0 ; j< tam ; j++){

          if( i == j ){
            printf(" %d", m[i][j]);
          }
          else printf("   ");
        }
        printf("\n");
    }


    for(i = 0; i< tam ; i++ ){
        for( j = 0 ; j< tam ; j++){

          if( (i+j) == (tam-1) ){
            printf(" %d", m[i][j]);
          }
          else printf("   ");
        }
        printf("\n");
    }

return 0;
}
