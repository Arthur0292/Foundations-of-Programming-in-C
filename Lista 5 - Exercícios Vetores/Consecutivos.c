#include <stdio.h>

int main(){
    int n, x, sequenciaAtual= 1, maiorSequencia = 0;
    scanf("%d", &n);

    int array[n];

    for(int i = 0; i<n; i++){
        scanf("%d", &x);
        if(i == 0){
            array[i] = x;
        }else{
            array[i] = x;
            if(array[i] == array[i - 1]){
            sequenciaAtual++;
        }else{   
            if(sequenciaAtual >= maiorSequencia){
            maiorSequencia = sequenciaAtual;
            }
            sequenciaAtual= 1;
        }
        }
                      
    }

    if(sequenciaAtual >= maiorSequencia){
        maiorSequencia = sequenciaAtual;
        sequenciaAtual= 1;
    }


    printf("%d\n", maiorSequencia);
    
    return 0;
}
