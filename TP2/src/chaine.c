#include <stdio.h>

int main() {
    char chaine1[] = "Hello";
    char chaine2[] = " World!";
    char copie[100];      
    char concatenee[200];  

    int longueur = 0;
    while (chaine1[longueur] != '\0') {
        longueur++;
    }
    printf("Longueur de chaine1 : %d\n", longueur);

    int i = 0;
    while (chaine1[i] != '\0') {
        copie[i] = chaine1[i];
        i++;
    }
    copie[i] = '\0'; 
    printf("Copie de chaine1 : %s\n", copie);

    int j = 0;
    while (chaine1[j] != '\0') {
        concatenee[j] = chaine1[j];
        j++;
    }
    int k = 0;
    while (chaine2[k] != '\0') {
        concatenee[j] = chaine2[k];
        j++;
        k++;
    }
    concatenee[j] = '\0'; 
    printf("Chaîne concaténée : %s\n", concatenee);

    return 0;
}
