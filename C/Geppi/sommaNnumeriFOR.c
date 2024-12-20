#include <stdio.h> 
int main(){

    int N, somma = 0; 

    printf("Inserisci un numero: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        somma += i; 
    }

    printf("La somma dei primi %d numeri è %d\n", N, somma);

    return 0;

}
