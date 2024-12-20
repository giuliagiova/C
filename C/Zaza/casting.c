#include <stdio.h> 
int main(){

    int i = 5;
    float f = 3.7;
    int iSomma = i + f;
    float fSomma = i + f;
    printf("La somma intera di %d e %f è %d\n", i, f, iSomma);
    printf("Conversione esplicita a float: %f\n", (float)iSomma);
    printf("La somma flaot di %d e %f è %f\n", i, f, fSomma);
    return 0;





}