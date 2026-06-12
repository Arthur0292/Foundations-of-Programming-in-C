#include <stdio.h>

int buscaBinaria(int *vet, int valor, int inicio, int fim){
    int meio;
    if(inicio <= fim){
        meio = (inicio + fim)/2;
        if(valor == vet[meio]){
            return meio;
        }else{
            if(valor < vet[meio]){
                return buscaBinaria(vet, valor, inicio, meio - 1);
            }else{
                return buscaBinaria(vet, valor, meio + 1, fim);
            }
        }
    }
    return -1; //Valor não encontrado no vetor;
}

int main() {
    int array[10];

    int x = 10;
    int valorBusca,resultado;


    for(int i = 0; i<10; i++){
        array[i] = x;
        x += 10;
    }

    scanf("%d", &valorBusca);
    resultado = buscaBinaria(array,valorBusca, 0, 9);
    if(resultado == -1){
        printf("Valor não encontrado no vetor\n");
    }else{
        printf("Array[%d] = %d\n", resultado, valorBusca);
    }
    
    return 0;
}
