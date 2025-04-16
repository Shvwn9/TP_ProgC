#include <stdio.h>

int main() {
    int compteur = 5; // à modifier pour tester d'autres tailles

    if (compteur >= 10) {
        printf("La valeur du compteur doit être inférieure à 10.\n");
        return 1;
    }

    for (int i = 1; i <= compteur; i++) {
        for (int j = 1; j <= i; j++) {
            // Conditions pour afficher * ou #
            if (i == 1 || i == compteur || j == 1 || j == i) {
                printf("* ");
            } else {
                printf("# ");
            }
        }
        printf("\n");
    }

    return 0;
}
