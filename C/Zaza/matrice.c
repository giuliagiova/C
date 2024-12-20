#include <stdio.h>

int main(){
    int matrix [3][3];
    int value = 1;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3 ; j++){
            matrix[i][j] = value++;
            printf("%d ", matrix[i][j]);
        }
    }
return 0;
}

