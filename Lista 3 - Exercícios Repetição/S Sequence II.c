#include <stdio.h>

int main() {
    double soma = 0;
    double numerator = 1.0;
    double denominator = 1.0;

    while (numerator <= 39) {
        soma += (numerator / denominator);
        
        numerator += 2;          
        denominator *= 2;        
    }

    printf("%.2lf\n", soma);

    return 0;
}
