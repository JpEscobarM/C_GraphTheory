#include <stdio.h>
#include <stdlib.h>


//crie um programa que preencha uma matriz 5x10 com numeros inteiros  em seguida:
// 1- some cada uma das linhas armazenando o resultado em um vetor;
//2 some cada uma das colunas armazenando o resultado em um vetor
//3- imprima a matriz e dois vetores identificando qual é a soma das linhas e qual é a soma das colunas

int main(){

    int i, j , m[5][10];
    int somaLinhas[5], count = 0, somaColunas[10];
    srand(time(NULL));

    for(i = 0 ; i < 5 ; i++){

        for ( j = 0 ; j< 10 ; j++){

            m[i][j]= rand()%100;

        }
    }
//2 some cada uma das colunas armazenando o resultado em um vetor
    for(i =0; i < 5 ; i ++){
        for( j =0; j < 10 ; j++){

            count += m[i][j];

        }
        somaLinhas[i] = count;
        count = 0;
    }

//3- imprima a matriz e dois vetores identificando qual é a soma das linhas e qual é a soma das colunas:


    for (j = 0 ; j < 10 ; j++){
            for ( i =0 ; i < 5 ; i++){

                count += m[i][j];

            }
            somaColunas[j] = count;
            count =0 ;
    }



      for(i =0; i < 5 ; i ++){
        for( j =0; j < 10 ; j++){

            printf(" %2d ", m[i][j]);

        }
        printf("\n");
    }

      printf("\n\nsoma das linhas: ");
      for(i = 0 ; i< 5 ; i++){

        printf("\nlinha Nro %d - soma: %d", (i+1), somaLinhas[i] );
      }

         printf("\n\nsoma das colunas: ");
      for(i = 0 ; i< 10 ; i++){

        printf("\ncoluna Nro %d - soma: %d", (i+1), somaColunas[i] );
      }

return 0;
}
