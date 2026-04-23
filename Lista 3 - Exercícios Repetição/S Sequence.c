#include <stdio.h>

int main() {
    double s, soma = 0;

    for(int i = 1; i<=100; i++){
        s = 1.0/i;
        soma += s;
    }
    printf("%.2lf\n", soma);

    return 0;

}
