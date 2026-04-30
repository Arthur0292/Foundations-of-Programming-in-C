#include <stdio.h>

void leitura(int *codigo, double *n1, double *n2, double *n3){
    printf("Digite o codigo do Aluno:");
    scanf("%d", codigo);
    
    printf("Digite a nota 1: ");
    scanf("%lf", n1);
    while(*n1 > 10 || *n1 < 0){
        printf("Nota invalida digite novamente: ");
        scanf("%lf", n1);
    }
    printf("Digite a nota 2: ");
    scanf("%lf", n2);
    while(*n2 > 10 || *n2 < 0){
        printf("Nota invalida digite novamente: ");
        scanf("%lf", n2);
    }
    printf("Digite a nota 3: ");
    scanf("%lf", n3);
    while(*n3 > 10 || *n3 < 0){
        printf("Nota invalida digite novamente: ");
        scanf("%lf", n3);
    }
    
}

double media(double a, double b, double c){
    double media;
    media = ((a * 3.0 ) + (b * 3.0) + (c * 4.0))/10.0;
    return media;
}

int main() {
    int n, codigo;
    double n1, n2, n3, mediaNotas;
    scanf("%d", &n);
    
    for(int i = 0; i<n; i++){
        leitura(&codigo, &n1, &n2, &n3);
        mediaNotas = media(n1, n2, n3);
        printf("-------------------------");
        printf("\n");
        printf("Codigo do aluno: %d\n", codigo);
        printf("Media do Aluno: %.2lf\n", mediaNotas);
        printf("-------------------------");
        printf("\n");
    }

    
    return 0;
}
