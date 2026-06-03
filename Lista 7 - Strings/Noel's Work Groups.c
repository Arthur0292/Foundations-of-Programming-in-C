#include <stdio.h>
#include <string.h>

int main() {
    char nome[100], grupo[100];
    int n, horas;
    
    int horas_bonecos = 0;
    int horas_arquitetos = 0;
    int horas_musicos = 0;
    int horas_desenhistas = 0;
    
    int presentes = 0;

    scanf("%d", &n);

        for(int i = 0; i < n; i++) {
            scanf("%s %s %d", nome, grupo, &horas);

            if (strcmp(grupo, "bonecos") == 0) {
                horas_bonecos += horas;
            } else if (strcmp(grupo, "arquitetos") == 0) {
                horas_arquitetos += horas;
            } else if (strcmp(grupo, "musicos") == 0) {
                horas_musicos += horas;
            } else if (strcmp(grupo, "desenhistas") == 0) {
                horas_desenhistas += horas;
            }
        }

        presentes += (horas_bonecos / 8);
        presentes += (horas_arquitetos / 4);
        presentes += (horas_musicos / 6);
        presentes += (horas_desenhistas / 12);

        printf("%d\n", presentes);
    

    return 0;
}
