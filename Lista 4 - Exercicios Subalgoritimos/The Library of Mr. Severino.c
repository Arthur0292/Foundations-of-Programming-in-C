#include <stdio.h>

void ordenar(int* arr, int tamanho){

    for(int i = 0; i<tamanho; i++){
        for(int j = 0; j < tamanho - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }


}


int main(){

    int n;
    while(scanf("%d", &n) != EOF){
        int array[n];
    
        for(int i = 0; i<n; i++){
            scanf("%d", &array[i]);
        }

        ordenar(array, n);

        for(int i = 0; i<n; i++){
            printf("%04d\n", array[i]); 
        }




    }


    return 0;
}
