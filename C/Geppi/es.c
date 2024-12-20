#include <stdio.h> 
int main(){
     
    float p;
    float r;
    int t;
    float si;

    printf("Inserisci l'importo principale: ");
    scanf("%f", &p);

    printf("Inserisci il tasso d'interesse: ");
    scanf("%f", &r);

    printf("Inserisci il periodo di tempo: ");
    scanf("%d", &t);


    si = (p*r*t)/100;

    printf("Il risultato è: %.2f\n", si);
    return 0;


}
