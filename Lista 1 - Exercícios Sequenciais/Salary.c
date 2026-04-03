#include <stdio.h>


int main(){
    
    int id, horas;
    double valor, salario;

    scanf("%d %d %lf", &id, &horas, &valor);

    salario = horas * valor;

    printf("NUMBER = %d\n", id);
    printf("SALARY = U$ %.2lf\n", salario);


    return 0;
}
