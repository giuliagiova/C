#include <stdio.h>
#include <math.h>

int main (){
    int numero;
    printf("Inserisci un numero: ");
    scanf("%d", &numero);


    if (numero < 0){
        printf("Errore");
    }

    else{
    printf("%f", sqrt(numero));
    }

    return 0;


}