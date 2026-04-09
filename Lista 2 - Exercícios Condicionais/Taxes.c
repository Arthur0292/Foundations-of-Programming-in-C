#include <stdio.h>

int main() {
    double n, taxa;


    if (scanf("%lf", &n) == 1) {
        
        if (n <= 2000.0) {
            printf("Isento\n");
        } 
        else if (n <= 3000.0) {
            taxa = (n - 2000.0) * 0.08;
            printf("R$ %.2lf\n", taxa);
        } 
        else if (n <= 4500.0) {
           
            taxa = 80.0 + (n - 3000.0) * 0.18;
            printf("R$ %.2lf\n", taxa);
        } 
        else {
           
            taxa = 80.0 + 270.0 + (n - 4500.0) * 0.28;
            printf("R$ %.2lf\n", taxa);
        }
    }

    return 0;
}
