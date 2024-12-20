#include <stdio.h>
int main(){

int array[10];
for(int i = 0; i < 10; i++){
    printf("Inserisci il valore n %d: ", i+1);
    scanf("%d", &array[i]);
}

int max = array[0];
int min = array[0];

for(int i = 0; i < 10; i++){
    if(array[i]> max) {
        max = array[i];
    }
        if(array[i]< min) {
        min = array[i];
    }
}

printf("Il valore maggiore è: %d\n", max);
printf("Il valore minore è: %d\n", min);

}