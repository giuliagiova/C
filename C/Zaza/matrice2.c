#include <stdio.h>

int main(){
    int matrix [3][4];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4 ; j++){
         printf("Inserisci il valore %d: ", i+1);
         scanf("%d",& matrix[i][j]);   
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4 ; j++){
         printf("%d ", matrix[i][j]);
        }
        printf("\n");           //stampa a tabella 
    }


return 0;
}

