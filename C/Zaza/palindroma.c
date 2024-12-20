#include <stdio.h>
#include <string.h>

int main(){
    char array[100];
    printf("Inserisci una stringa: ");
    scanf("%[^\n]", array);
    int lunghezza = strlen(array);
    int pippo = 0;
    char array2[100];

    for(int i = 0; i < lunghezza; i++){
        array2[i] = array[lunghezza - i - 1];
    }

    for(int j = 0; j < lunghezza; j++){
        if(array[j] != array2[j]){
            pippo = 1;
            break;
        }
        }

if(pippo==0){
    printf("La stringa è palindroma");
    }
    else{
    printf("La stringa non è palindroma");
    }

}



