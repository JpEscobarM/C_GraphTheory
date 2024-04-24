#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    FILE *file;
    char letra;
    file = fopen("conto.txt","w+");

    if(file){
        printf("Digite um texto:\n");
        scanf("%c", &letra);
        while(letra!= '\n'){
            fputc(letra,file);
            scanf("%c", &letra);
        }

        rewind(file);

        printf("TEXTO ARQUIVO:\n\n");
        while( !feof(file)){

            letra = fgetc(file);
            printf("%c", letra);

        }

        fclose(file);
    }
    else{
        printf("erro ao abrir arquivo");
    }

return 0;
}
