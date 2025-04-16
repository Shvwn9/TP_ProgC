#include <stdio.h>
#include <math.h> // Pour utiliser M_PI

int main() {
    double rayon;
    double aire, perimetre;

    // Saisir le rayon du cercle
    printf("Entrez le rayon du cercle : ");
    scanf("%lf", &rayon);

    // Calcul de l'aire
    aire = M_PI * rayon * rayon;

    // Calcul du périmètre
    perimetre = 2 * M_PI * rayon;

    // Affichage des résultats
    printf("Aire du cercle : %.2lf\n", aire);
    printf("Perimetre du cercle : %.2lf\n", perimetre);

    return 0;
}
