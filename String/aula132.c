#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

char palavras[55] = { "teste de tamanho de string"};



//printf("digite seu nome: ");
//fgets(palavras,55,stdin);



int i=0;

for( i =0 ; i < 55  ;  i++){
    printf("%d = %d\n",i, palavras[i]);
}
int tam = 0 ;
i=0;
while ( palavras[i] != '\0'){

    tam++;
    i++;
}
printf("tamanho %d", tam);
return 0;
}
