
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main(){


   printf("digite o tamanho do vetor: ");
   int n;

   scanf("%d", &n);
   scanf("%c");
   char str[n];

   printf("digite uma frase: ");

   fgets(str,n, stdin);

    int num,i=0;
    while(str[i] != '\0'){
       if(i== n){
        break;
       }
        num = str[i];

        printf("%c: %d\n", str[i],num);
       i++;

    }


return 0;
}
