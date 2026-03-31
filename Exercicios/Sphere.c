#include <stdio.h>
int main(){
    
    const double pi = 3.14159;
    double r, v;

    scanf("%lf", &r);

    v = (4/3.0) * pi * (r * r * r);

    printf("VOLUME = %.3f\n", v);
}
