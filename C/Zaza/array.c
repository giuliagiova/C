#include <stdio.h>
int main(){

int array[5];
for(int i = 0; i < 5; i++){
    printf("Inserisci il valore n %d: ", i+1);
    scanf("%d", &array[i]);
}

int k;
printf("Inserisci il valore k %d: ", k);
scanf("%d", &k);

for(int j = 0; j < 5; j++){
    if(array[j] == k) {
        printf("%d\n", j);
    }
}
}
