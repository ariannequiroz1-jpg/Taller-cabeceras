#include <stdio.h>
#include "sumar.h"
#include "restar.h"
#include "multiplicacion.h"
int main(){
    int a,b;
    printf("Ingrese el 1er numero; ");
    scanf("%d", &a);
    printf("Ingrese el 2do numero; ");
    scanf("%d", &b);
    printf("La suma es: %d",sumar(a,b));
    printf("\nLa resta es: %d",restar(a,b));
    printf("\nLa multiplicacion es: %d",multiplicacion(a,b));
    return 0;

}