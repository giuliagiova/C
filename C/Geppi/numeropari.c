#include <stdio.h> 
int main(){

    int a;
    printf("Inserisci un numero: ");
    scanf("%d", &a);

    if (a%2==0){
        printf("Il numero è pari\n");

        if (a%5==0)
        printf("Il numero è divisibile per 5\n");
        
    }
    else { 
        printf("Il numero è dispari\n");

    } 

} 



