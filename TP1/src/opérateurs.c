#include <stdio.h>

int main() {
    int a = 16;
    int b = 3;

    // Opérateurs arithmétiques
    int addition = a + b;
    int soustraction = a - b;
    int multiplication = a * b;
    int division = a / b;
    int modulo = a % b;

    // Opérateurs logiques / de comparaison
    int egal = (a == b);
    int superieur = (a > b);

    // Affichage des résultats
    printf("a = %d, b = %d\n\n", a, b);

    printf("Addition (a + b) : %d\n", addition);
    printf("Soustraction (a - b) : %d\n", soustraction);
    printf("Multiplication (a * b) : %d\n", multiplication);
    printf("Division (a / b) : %d\n", division);
    printf("Modulo (a %% b) : %d\n\n", modulo);

    printf("a est-il égal à b ? : %s\n", egal ? "true" : "false");
    printf("a est-il supérieur à b ? : %s\n", superieur ? "true" : "false");

    return 0;
}
