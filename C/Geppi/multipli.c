#include <stdio.h> 
/*Calcolo dei primi n multipli di k*/
int main(){


int n,k,i;

printf("Inserisci il valore di n\n");
scanf("%d", &n);

printf("Inserisci il valore di k\n");
scanf("%d", &k);


for (i=1; i<=n; i++){
    printf("Il multiplo %d-esimo di %d è %d\n", i,k,i*k);
}


    return 0;
}
