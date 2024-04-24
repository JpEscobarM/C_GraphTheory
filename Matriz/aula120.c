#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*

Aula 120

Dadas duas matrizes A e B 3 x 3, faça um programa para calular a soma
das matrizes e salvar em uma matriz C. imprima as matrizes.


*/

int main(){

int a[3][3],b[3][3],c[3][3];
int i,j;

 srand(time(NULL));


 for( i = 0; i<3 ; i++){
    for (j = 0 ; j<3 ;j++){
        a[i][j] = rand()%100;
        b[i][j] = rand()%100;
        c[i][j] = a[i][j] + b[i][j];
    }
 }


printf("\n\nMatriz A: \n");
 for( i = 0; i<3 ; i++){
    for (j = 0 ; j<3 ;j++){
        printf("%2d", a[i][j]);
    }
    printf("\n");
 }
 printf("\n\nMatriz B: \n");
 for( i = 0; i<3 ; i++){
    for (j = 0 ; j<3 ;j++){
        printf(" %2d", b[i][j]);
    }
    printf("\n");
 }

printf("\n\nMatriz C: \n");
 for( i = 0; i<3 ; i++){
    for (j = 0 ; j<3 ;j++){
        printf(" %2d", c[i][j]);
    }
    printf("\n");
 }
return 0;
}



