#include <stdio.h>

int main() {
    int nb = 15;
    int valeur;

    printf("Devinez le nombre: ");
    scanf("%d", &valeur);

    if (valeur == nb) {
        printf("Bravo! Vous avez deviné le nombre.\n");
    } else {
        printf("Dommage! Ce n'est pas le bon numéro.\n");
    }

    return 0;
}