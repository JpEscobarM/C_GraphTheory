
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(){

    int *vet, tam, i;
    srand(time(NULL));

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);

    vet = malloc(tam * sizeof(int));

    if(vet){

        for(i =0 ; i < tam ; i++){
            *(vet +  i) = rand() %100;
        }
         for(i =0 ; i < tam ; i++){
            printf("|%d|", *(vet+ i));
        }

        free(vet);
            }
    else{
        printf("Erro ao alocar memoria");
    }

return 0;
}
