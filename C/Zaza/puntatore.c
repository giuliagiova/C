#include <stdio.h>
int main(){

    int a;
    int *p;

    a = 5;
    printf("a ha indirizzo %p e valore %d\n", &a, a);
    p=&a;
    printf("p ha indirizzo %p e valore %p\n", &p, p);
    *p=6,
    printf("a vale %d\n", a);

    return 0;

}