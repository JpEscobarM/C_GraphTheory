

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

//função que retorna o fatorial de n sendo 1! = 1 e 0! = 1.




int fatorial(int n){

    if ( n == 0 || n == 1){

        return 1;
    }
    else{

      return   n * fatorial(n-1);

    }


}


int main(){

    int n;

    printf("Digita um valor maior que zero: ");
    scanf("%d", &n);

   printf("Fatorial de %d: %d",n, fatorial(n));

return 0;
}
