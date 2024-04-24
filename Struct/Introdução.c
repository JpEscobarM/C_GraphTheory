#include <stdio.h>
#include <stdlib.h>
#include <string.h>



typedef struct{

    int idade;
    char sexo;
    char nome[100];


}Pessoa;

int main(){


    Pessoa pessoa;

    printf("\t\tCADASTRO\n ");

    printf("Digite sua idade: ");

    scanf("%d", &pessoa.idade);
    scanf("%c");

    printf("\nQual seu sexo? M - masculino F - feminino: ");

    scanf("%c", &pessoa.sexo);
    scanf("%c");


    printf("\nDigite seu nome completo: ");

    fgets(pessoa.nome, 100 , stdin);

    printf("\n\nNome: %s\nIdade: %d\tSexo: %c", pessoa.nome, pessoa.idade, pessoa.sexo);


return 0;
}
