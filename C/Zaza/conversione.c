#include <stdio.h> 
int main(){

int n;

int array[3];

printf("Inserisci un numero: ");
scanf("%d",&n);


while (n > 0){
    int resto = n %2;
    printf("%d\n", resto);
    n = n/2;
}
}