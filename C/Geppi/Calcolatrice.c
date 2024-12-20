#include <stdio.h>

// Funzione principale
int main() {
    char operazione;
    double num1, num2;

    // Chiede all'utente di inserire l'operazione desiderata
    printf("Scegli l'operazione (+, -, *, /): ");
    scanf("%c", &operazione);

    // Chiede all'utente di inserire due numeri
    printf("Inserisci due numeri: ");
    scanf("%lf %lf", &num1, &num2);

    // Esegue l'operazione scelta dall'utente
    switch (operazione) {
        case '+':
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
            } else {
                printf("Errore: divisione per zero non consentita.\n");
            }
            break;
        default:
            printf("Operazione non valida.\n");
            break;
    }

    return 0;
}