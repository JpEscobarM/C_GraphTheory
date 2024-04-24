#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define tam 5
#define INF 99

int pai[tam];
int g[tam][tam] = {{0,3,0,5,0},
                   {3,0,4,2,0},
                   {0,4,0,0,3},
                   {0,2,0,0,0},
                   {0,0,3,0,0},};
//ALGORITIMO DE PRIM

// V -> o conjunto de todos os vertices do grafo original
// U -> o conjunto de vertices já selecionados ( fazem parte da árvore geradora minima)


/*A identificação de qual vertice deve ser selecionado a cada passo pode ser feita de forma eficiente
mantendo PARA CADA VERTICE a MENOR DISTANCIA dele para a subarvore já montada. ( chamamos esse vetor de d).
*/


//Codigo Prim


int prim(int g[tam][tam]){

    int i;
    int U[tam], d[tam]; // inicialmente nenhum vertice está em U
    for( i  = 0 ; i <tam ; i ++){
        U[i] = 0; d[i] = INF;
    }

    d[0] = 0; // inicia a montagem a partir do vertice 0

    for( i =0; i< tam ; i++){

        int menor = INF, j ,u;
       for ( j = 0 ; j < tam ; j++)
        if ( U[j] == 0 && d[j] < menor){
                menor = d[j]; u = j;
        }
        U[u] = 1; // incorpora o vertice u ao conjunto U

     for (j = 0 ; j < tam; j++)

        if (U[j]  == 0 && g[u][j] < d[j])
            d[j] = g[u][j];

    }
     int soma = 0;
     for ( i = 0 ; i< tam ; i ++)
        soma+= d[i];
    return soma;


}

int prim2( int g[tam][tam] ) {
int i ;
int U[tam], d[tam];
for (i=0; i<tam; i ++) {U[i]= 0; d[i]=INF ; pai[i] =0;}
d[0]= 0;
for( i =0; i<tam; i++)
{
int menor=INF , j , u ;
if(U[j]==0 && d [j]<menor ) {menor=d [j] ; u=j ;}
U[u]= 1;
for ( j =0; j<tam; j ++)

if (U[j]==0 && g[u][j]<d[j] )
{d[j]= g[u][j]; pai[j]=u ;}
}
int soma=0;
for ( i=0; i<tam; i ++) soma+=d [i] ;
return soma ;
}

int main(){

        prim2(g);

return 0;
}
