#include <stdio.h>

float x2, x3, y2, y3;

void LePonto(){
    scanf("%f %f %f %f", &x2, &y2, &x3, &y3);
    
}

int main(){
    LePonto();
    if(x3 == x2){
        printf("Nao eh possivel determinar o coeficiente angular.\n");
    }else{
        float m;
        m = (y3 - y2)/(x3 - x2);
        printf("%.2f\n", m);
    }
    return 0;
}
