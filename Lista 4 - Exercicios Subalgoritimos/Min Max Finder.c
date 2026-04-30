#include <stdio.h>
void comparar(int x, int y, int z, int *maior, int *menor) {
    if(x >= y && x >= z){
        *maior = x;
        if(z >= y){
            *menor = y;
        }else{
            *menor = z;
        }
    }else if(y >= x && y >= z){
        *maior = y;
        if(z >= x){
            *menor = x;
        }else{
            *menor = z;
        }
    }else if(z >= y && z >= x){
        *maior = z;
        if(y >= x){
            *menor = x;
        }else{
            *menor = y;
        }
    }
}

int main() {
    int a, b, c, maior, menor;

    scanf("%d %d %d", &a, &b, &c);
    comparar(a, b, c, &maior, &menor);
    printf("Maior: %d\nMenor:%d\n", maior, menor);

    return 0;
}
