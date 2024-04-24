
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*
    CONVERTENDO STRING PARA MAIUSCULO.
*/
void maiusculo(char str1[], char str2[]){

    int i =0 ;
    while( str1[i]!= '\0'){

            str2[i] = toupper(str1[i]);

        i++;
    }
str2[i] = '\0';

}


int main(){


    char str1[] = { "ola, vai se fuder tmj"};
    char str2[50];


    maiusculo(str1,str2);

    printf("%s\n", str2);


return 0;
}
