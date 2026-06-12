#include <stdio.h>

int main(){

    long long int lado, comprimento, perimetro;
    scanf("%lld %lld", &lado, &comprimento);
    
    perimetro = lado * comprimento;

    printf("%lld\n", perimetro);

    return 0;
}
