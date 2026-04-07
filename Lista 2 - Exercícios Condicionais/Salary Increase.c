#include <stdio.h>

int main() {

    double salario, r, t;
    scanf("%lf", &salario);

    if((salario <= 400) && (salario >= 0)){
        r = ((15.0/100.0) * salario);
        t = r + salario;
        printf("Novo salario: %.2lf\n", t);
        printf("Reajuste ganho: %.2lf\n", r);
        printf("Em percentual: 15 %\n");
    }else if((salario >= 400,01) && (salario <= 800)){
        r = ((12.0/100.0) * salario);
        t = r + salario;
        printf("Novo salario: %.2lf\n", t);
        printf("Reajuste ganho: %.2lf\n", r);
        printf("Em percentual: 12 %\n");
    }else if((salario >= 800,01) && (salario <= 1200)){
        r = ((10.0/100.0) * salario);
        t = r + salario;
        printf("Novo salario: %.2lf\n", t);
        printf("Reajuste ganho: %.2lf\n", r);
        printf("Em percentual: 10 %\n");
    }else if((salario >= 1200,01) && (salario <= 2000)){
        r = ((7.0/100.0) * salario);
        t = r + salario;
        printf("Novo salario: %.2lf\n", t);
        printf("Reajuste ganho: %.2lf\n", r);
        printf("Em percentual: 7 %\n");
    }else if(salario > 2000){
        r = ((4.0/100.0) * salario);
        t = r + salario;
        printf("Novo salario: %.2lf\n", t);
        printf("Reajuste ganho: %.2lf\n", r);
        printf("Em percentual: 4 %\n");
    }

    return 0;
}
