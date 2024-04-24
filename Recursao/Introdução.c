
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>


//aula 153: imprimir todos os numeros de n até 0

void imprimir(int n){// função que decrementa e imprime o numero chamando ela mesma.


  if(  n ==0 ) {
     printf("%d",n);
     }
    else{


        imprimir(n - 1);
        printf("%d",n);

    }


}

int main(){


int n;

    printf("Digite um valor maior que zero: ");


    scanf("%d", &n);

    imprimir(n);




return 0;
}
