#include <stdio.h>
#include <string.h>

int main() {
    char tipo[20], familia[20], alimento[20];

    scanf("%s %s %s", tipo, familia, alimento);

    if (strcmp(tipo, "vertebrado") == 0) {
        if (strcmp(familia, "ave") == 0) {
            if (strcmp(alimento, "carnivoro") == 0) {
                printf("aguia\n");
            } else if (strcmp(alimento, "onivoro") == 0) {
                printf("pomba\n");
            }
        } else if (strcmp(familia, "mamifero") == 0) {
            if (strcmp(alimento, "onivoro") == 0) {
                printf("homem\n");
            } else if (strcmp(alimento, "herbivoro") == 0) {
                printf("vaca\n");
            }
        }
    } else if (strcmp(tipo, "invertebrado") == 0) {
        if (strcmp(familia, "inseto") == 0) {
            if (strcmp(alimento, "hematofago") == 0) {
                printf("pulga\n");
            } else if (strcmp(alimento, "herbivoro") == 0) {
                printf("lagarta\n");
            }
        } else if (strcmp(familia, "anelideo") == 0) {
            if (strcmp(alimento, "hematofago") == 0) {
                printf("sanguessuga\n");
            } else if (strcmp(alimento, "onivoro") == 0) {
                printf("minhoca\n");
            }
        }
    }

    return 0;
}
