
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


 // 0 1 1 2 3 5 8 13...

int fibonacci(int n){

    if ( n == 1 ){
        return 0;
    }
    else if( n ==  2 ){
        return 1;
    }
    else{
        return fibonacci(n-1) + fibonacci(n-2);
    }



}


int main(){


int n;

printf("digite um valor maior que zero: ");
scanf("%d", &n);

printf("o termo e %d", fibonacci(n));

return 0;
}
