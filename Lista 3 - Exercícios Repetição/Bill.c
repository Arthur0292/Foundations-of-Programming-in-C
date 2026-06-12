#include <stdio.h>

int main(){

    int n, soma = 0, num;
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++){
        scanf("%d", &num);
        for(int j = 1; j<=num; j++){
            if(j%2 == 0){
            soma--;
            }else{
            soma++;
            }
        }
        printf("%d\n", soma);
        soma = 0;
    }
    

    


    return 0;
}
