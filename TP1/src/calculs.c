
#include <stdio.h>

int main() {
    int num1 = 10;
    int num2 = 3;
    char op = '+'; // Change cette valeur pour tester d'autres opérations

    int resultat;

    printf("num1 = %d, num2 = %d, op = '%c'\n", num1, num2, op);

    switch (op) {
        case '+':
            resultat = num1 + num2;
            printf("Résultat (addition) : %d\n", resultat);
            break;

        case '-':
            resultat = num1 - num2;
            printf("Résultat (soustraction) : %d\n", resultat);
            break;

        case '*':
            resultat = num1 * num2;
            printf("Résultat (multiplication) : %d\n", resultat);
            break;

        case '/':
            if (num2 != 0) {
                resultat = num1 / num2;
                printf("Résultat (division) : %d\n", resultat);
            } else {
                printf("Erreur : division par zéro !\n");
            }
            break;

        case '%':
            if (num2 != 0) {
                resultat = num1 % num2;
                printf("Résultat (modulo) : %d\n", resultat);
            } else {
                printf("Erreur : modulo par zéro !\n");
            }
            break;

        case '&':
            resultat = num1 & num2;
            printf("Résultat (ET binaire) : %d\n", resultat);
            break;

        case '|':
            resultat = num1 | num2;
            printf("Résultat (OU binaire) : %d\n", resultat);
            break;

        case '~':
            // L'opérateur '~' est unaire, s'applique à num1 uniquement
            resultat = ~num1;
            printf("Résultat (NON binaire de num1) : %d\n", resultat);
            break;

        default:
            printf("Opérateur non reconnu.\n");
            break;
    }

    return 0;
}
