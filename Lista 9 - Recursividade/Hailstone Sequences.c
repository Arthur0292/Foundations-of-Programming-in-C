#include <stdio.h>
#include <string.h>

int recursividade(int a, int maior){
    
    if(a > maior){
        maior = a;
    }
    if(a == 1){
        return maior;
    }else{
        int pro;
        if(a%2 == 0){  
            pro = a / 2;
        }else{
            pro = 3 * a + 1;
        }
        return recursividade(pro, maior);
    }

}

int main() {

    int n = 1, maior = 0;

    while(scanf("%d", &n) == 1 && n != 0){

        maior = recursividade(n, maior);
        printf("%d\n", maior);

        maior = 0;


    }


    return 0;
}
