#include <stdio.h>

#define N 4

int matriz[N][N] = {
  {-1, 0, -1, -1},
  {0, -1, 6, -1},
  {-1, -1, -1, 0},
  {-1, -1, 0, -1}
};

void dijkstra(int inicial, int fim){
  int distancias[N], visitados[N];

  for(int i = 0; i < N; i++){
    distancias[i] = 999;
    visitados[i] = 0;
  }

  distancias[inicial] = 0;

  for(int i = 0; i < N; i++){
    int menor = 999, indiceDoMenor;

    for(int j = 0; j < N; j++){
      if(distancias[j] < menor && visitados[j] == 0){
        indiceDoMenor = j;
        menor = distancias[j];
      }
    }
    if(menor == 999){
      printf("Erro");
      break;
    }

    if(indiceDoMenor == fim){
      break;
    }
    visitados[indiceDoMenor] = 1;


    for(int j = 0; j < N; j++){
      if(matriz[indiceDoMenor][j] != -1 && visitados[j] == 0 && matriz[indiceDoMenor][j] < distancias[j]){
        distancias[j] = matriz[indiceDoMenor][j];
      }
    }

  }

  int soma = 0;
  for(int i = 0; i < N; i++){
    if(distancias[i] != 999){
      soma += distancias[i];
    }
    // printf("%d ", distancias[i]);
  }

  printf("\nResultado: %d", soma);
}

int main(void) {
  dijkstra(3, 0);
  return 0;
}
