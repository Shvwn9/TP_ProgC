#include <stdio.h>

#define NB_STUDENT 5
#define Lenght_MAX 50

int main() {
    char name[NB_STUDENT][Lenght_MAX] = {
        "Dupont", "Martin", "Bernard", "Lefevre", "Moreau"
    };

    char LastName[NB_STUDENT][Lenght_MAX] = {
        "Alice", "Jean", "Sophie", "Lucas", "Emma"
    };

    char Adresse[NB_STUDENT][Lenght_MAX] = {
        "10 rue A", "15 avenue B", "22 boulevard C", "7 impasse D", "30 route E"
    };

    float notes_prog[NB_STUDENT] = {14.5, 12.0, 17.25, 10.0, 13.75};
    float notes_sys[NB_STUDENT] = {15.0, 13.5, 16.0, 11.5, 14.0};

    printf("students info :\n\n");

    for (int i = 0; i < NB_STUDENT; i++) {
        printf("student %d :\n", i + 1);
        printf("Name       : %s\n", name[i]);
        printf("LastName    : %s\n", LastName[i]);
        printf("Adresse   : %s\n", Adresse[i]);
        printf("Note Prog : %.2f\n", notes_prog[i]);
        printf("Note Syst : %.2f\n\n", notes_sys[i]);
    }

    return 0;
}
