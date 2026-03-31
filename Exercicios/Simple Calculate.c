#include <stdio.h>

int main() {
    int code1, uni1, code2, uni2;
    double pre1, pre2, total; 
  
    scanf("%d %d %lf", &code1, &uni1, &pre1);

    scanf("%d %d %lf", &code2, &uni2, &pre2);

    total = (uni1 * pre1) + (uni2 * pre2);

    printf("VALOR A PAGAR: R$ %.2f\n", total);

    return 0;
}
