#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void escrever(char nome[] )
{

    FILE *file;
    file = fopen(nome,"w");
    char texto[500];

    if(file)
    {

        printf("DIGITE UMA FRASE: ");
        scanf("%500[^\n]", texto);
        scanf("%c");
        while(strlen(texto)>1)
        {
            fputs(texto,file);
            fputc('\n',file);
            scanf("%500[^\n]", texto);
           // scanf("%c");
        }

    fclose(file);
    }
    else
    {
        printf("Não foi possivel abrir o arquivo!");
    }

}

void ler(char nomeArq[])
{
    FILE *file = fopen(nomeArq, "r");
    char letra;

    if( file )
    {

        while(!feof(file))
        {

            letra = fgetc(file);
            printf("%c", letra);

        }

    }
    else
    {
        printf("Erro ao abrir arquivo tente novamente.");
    }


}


int main()
{



    char nome[]= {"teste2.txt"};


    escrever(nome);

    printf("\n\n");

    ler(nome);


}
