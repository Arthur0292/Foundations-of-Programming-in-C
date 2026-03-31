#include <stdio.h>

int main(){
    
  int horas, v, distancia;
  double gasto;

    scanf("%d", &horas);
    scanf("%d", &v);

    distancia = horas * v;

    gasto = distancia / 12.0;

    printf("%.3lf\n", gasto);


    return 0;
}
