#include <stdio.h>
#include <string.h>

int mdc(int a, int b){
    while(b != 0){
        int resto = a % b;
        a = b;
        b = resto;
    }
    return a;
}



int main() {

    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d );

    int numerador = a * d + c * b;
    int denominador = b * d;

    int reposta = mdc(numerador, denominador);

    numerador /= reposta;
    denominador /= reposta;

    printf("%d %d\n", numerador, denominador);



        

    return 0;
}
