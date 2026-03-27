#include <stdio.h>
int main(){

    float A, B, C, R;

    scanf("%f", &A);
    scanf("%f", &B);
    scanf("%f", &C);

    R = ((A * 2) + (B * 3) + (C * 5))/10;

    printf("MEDIA = %.1f\n", R);

    return 0;
}
