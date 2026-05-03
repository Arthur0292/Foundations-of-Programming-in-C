#include <stdio.h>
#include <math.h>

int primo(int n){
    int i;
    int m = (int) sqrt(n);
    for(i = 2; i <= m; i++){
        if(n%i == 0){
            return 0;
        }
    }
    return 1;
}
 
int main(){
    int i;  
    for(i = 2; i <= 100; i++){
        if(primo(i) == 1)
            printf("%d eh primo\n", i);
        else
            printf("%d nao eh primo\n", i);
    }
    return 0;
}   
