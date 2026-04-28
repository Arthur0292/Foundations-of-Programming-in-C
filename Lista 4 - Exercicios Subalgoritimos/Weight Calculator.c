#include <stdio.h>

double pesoHomem(double x){
    double z;
    z = 23 * (x * x);
    return z;
}

double pesoMulher(double x){
    double z;
    z = 23 * (x* x);
    return z;
}

int main() {
    int n;
    scanf("%d", &n);

    double altura, peso;
    char sexo;

    for(int i = 0; i<n; i++){
        
        scanf("%lf", &altura);
        scanf(" %c", &sexo);
        if((sexo == 'M') || (sexo == 'm')){
            peso = pesoHomem(altura);
            printf("Peso ideal %.2lf\n", peso);
        }else if((sexo == 'F') || (sexo == 'f')){
            peso = pesoHomem(altura);
            printf("Peso ideal %.2lf\n", peso);
        }
    }

    return 0;
}
