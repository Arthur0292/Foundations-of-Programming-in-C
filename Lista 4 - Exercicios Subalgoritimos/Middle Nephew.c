#include <stdio.h>

int calcularmeio(int a, int b, int c){
    if(a > b && a < c || a > c && a < b){
        return a;
    }else if(b > a && b < c || b > c && b < a){
        return b;
    }else if(c > a && c < b || c > b && c < a){
        return c;
    }
}



int main(){
    
    int h, z, l, r;

    scanf("%d %d %d", &h, &z, &l);

    r = calcularmeio(h,z,l);

    if(r == h){
        printf("huguinho\n");
    }else if(r == z){
        printf("zezinho\n");
    }else{
        printf("luisinho\n");
    }




    return 0;
}
