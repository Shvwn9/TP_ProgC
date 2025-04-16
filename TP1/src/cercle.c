#include <stdio.h>
#include <math.h> 

int main() {
    double rayon;
    double aire, perimetre;
    
    printf("Entrez le rayon du cercle : ");
    fflush(stdout);
    scanf("%lf", &rayon);

    aire = M_PI * rayon * rayon;
    perimetre = 2 * M_PI * rayon;
    printf("Aire du cercle : %.2lf\n", aire);
    printf("Perimetre du cercle : %.2lf\n", perimetre);

    return 0;
}
