#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

    int N, E, i, j, orig, dest, h;


    scanf("%d%d",&N,&E);

    N +=1;

    int g[N][N];



    for( i = 0 ;  i < N ; i ++){
        for ( j = 0 ; j < N ; j++){

            g[i][j] = -1;

        }

    }





    for ( i = 0 ; i < E ; i ++){

        scanf("%d%d%d", &orig, &dest, &h);
        g[orig][dest] = h;


    }



    for ( i = 0 ; i< N ; i ++){
        for ( j = 0 ; j < N ; j ++){

            if ( g [i][j] != -1 && g[j][i] != -1 ) {
                g[i][j] = g[j][i] = 0;
            }


        }
    }



    int K;


    scanf("%d", &K);

    int visitados[N], distancia[N], flagDestino;

    for(int s = 0 ; s < K ; s ++){

        scanf("%d%d", &orig,&dest);

        flagDestino = 0 ;

        for ( i  = 0 ; i < N ; i ++){
            visitados[i] =0; distancia[i] = 99;
        }

        distancia[orig] = 0 ;

        for ( i  = 0 ; i < N ; i ++){

            int menor = 99, j , cidadeAtual;

            for ( j = 0 ; j < N ; j ++){

                if( visitados[j] == 0 && distancia[j] < menor  ){

                    menor = distancia[j]; cidadeAtual= j ;
                }
            }

            if ( cidadeAtual == dest){
                flagDestino = 1;
                break;
            }

        visitados[ cidadeAtual ] = 1;

            for ( j = 0 ; j <N ; j ++){

                if ( g[cidadeAtual][j] != -1 && g[cidadeAtual][j] < distancia[j] ){
                    distancia[j] = g[cidadeAtual][j] ;
                }

            }

        }
        int soma = 0;
        if( flagDestino == 1){
        for( i = 0 ; i < N ; i ++){
            if(distancia[i] != 99){
            soma += distancia[i];
            }
        }
        printf("%d\n" , soma);

        }
        else{
            printf("Nao e possivel entregar a carta\n");
        }
    }




return 0;
}
