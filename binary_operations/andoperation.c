#include <stdio.h>
/**
    operacion binaria con el operador and "&" 
    en las tablas de verdad tenemos esta definición
    |-----------
    | 0 | 1 | 0 |
    | 0 | 1 | 0 |
    | 1 | 0 | 0 |
    | 1 | 1 | 1 |   

    una suma se resolveria de la siguiente forma
    00010111 (23)
 &  01011010 (90)
    --------
    00010010 (18)

    si se utiliza el operador & en un condicional devolvera si hay un 1 en la operacion 
*/
int main(){
    char a = 23;
    char b = 90;
    char resultado;

    printf("a = %d b= %d ",a, b);
    resultado = a & b;
    printf(" resultado = %d", resultado);
}