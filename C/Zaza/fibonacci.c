#include <stdio.h> 

int fibonacci(int a){
    int x = 0;
    int y = 1;
    int z;

    printf("La sequenza di fibonacci è: %d %d ", x, y);

    for( int i = 3; i <= a; i++){
        z = x + y;
        printf("%d ", z);
        x = y;
        y = z;
    }

    printf("\n");

}

int main(){

int a;

printf("Quanti valori fibonacci vuoi ricevere? ");
scanf("%d", &a);

fibonacci(a);


}