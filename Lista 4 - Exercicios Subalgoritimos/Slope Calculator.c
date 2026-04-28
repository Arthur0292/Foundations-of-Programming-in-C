#include <stdio.h>

double ang(double x0,double y0, double x1, double y1){
    double m;
    m = (y1 - y0)/(x1 - x0);
    
    return m;
}

int main() {
    double a, b, c, d;
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);

    double resultado = ang(a, b, c, d);
    printf("%.2lf\n", resultado);
    
    return 0;
}
