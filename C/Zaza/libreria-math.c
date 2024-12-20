#include <stdio.h>
#include <math.h>

int main (){
    float numero;
    float sinNumero;
    printf("Inserisci un numero: ");
    scanf("%f", &numero);
    sinNumero = sin(numero);
    printf("sin(%.2f) = %.2f\n", numero, sinNumero);
    printf("cos(%.2f) = %.2f\n", numero, cos(numero));
    printf("|%.2f| = %.2f\n", numero, fabs(numero));
    printf("Intero inferiore: %.0f\n", floor(numero));
    printf("Intero superiore: %.0f\n", ceil(numero));

    return 0;


}