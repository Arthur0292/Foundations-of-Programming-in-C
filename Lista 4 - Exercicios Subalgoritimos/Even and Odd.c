#include <stdio.h>
#include <string.h>

void ordenarPar(int *arr, int tamanho){
    for(int i = 0; i<tamanho; i++){
        for(int j = 0; j < tamanho - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void ordenarImpar(int *arr, int tamanho){
    for(int i = 0; i<tamanho; i++){
        for(int j = 0; j < tamanho - i - 1; j++){
            if(arr[j] < arr[j + 1]){
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main(){

    int n;
    int par[100000], impar[100000];
    int cont1 = 0, cont2 = 0;
    scanf("%d", &n);


    for(int i = 0; i<n; i++){
        int x;
        scanf("%d", &x);
        if(x%2 == 0){
            par[cont1] = x;
            cont1++;
        }else{
            impar[cont2] = x;
            cont2++;
        }
    }

    ordenarPar(par, cont1);
    for(int i = 0; i<cont1; i++){
        printf("%d\n", par[i]);
    }
    ordenarImpar(impar, cont2);
    for(int i = 0; i<cont2; i++){
        printf("%d\n", impar[i]);
    }


    return 0;
}
