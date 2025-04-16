#include <stdio.h>

void afficher_binaire(int n) {
    int taille = sizeof(int) * 8;
    int i;
    int bit_actif_trouvé = 0; 

    for (i = taille - 1; i >= 0; i--) {
        int bit = (n >> i) & 1;
        if (bit == 1) bit_actif_trouvé = 1;

        if (bit_actif_trouvé || i == 0) {
            printf("%d", bit);
        }
    }

    printf("\n");
}

int main() {
    int valeurs[] = {0, 4096, 65536, 65535, 1024};
    int taille = sizeof(valeurs) / sizeof(valeurs[0]);

    for (int i = 0; i < taille; i++) {
        printf("Décimal : %d → Binaire : ", valeurs[i]);
        afficher_binaire(valeurs[i]);
    }

    return 0;
}
