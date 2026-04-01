#include <stdio.h>

int main(){
    
    double x, y, z;
    double a, b, c, temp;

    scanf("%lf %lf %lf", &x, &y, &z);


    if((x >= y) && (x >= z)){
        a = x;
        b = y;
        c = z;
    }else if ((y >= x) && (y >= z)){
        a = y;
        b = x;
        c = z;
    }else if((z >= x) && (z >= y)){
        a = z;
        b = x;
        c = y;
    }else if((x == y) && (y == z)){
        a = x;
        b = y;
        c = z;
    }

    if (b > c){
        b = b;
        c = c;
    }else{
        temp = b;
        b = c;
        c = temp;
    }

    if (a >= (b + c)){
        printf("NAO FORMA TRIANGULO\n");
    }else{
    if((a * a) == ((b * b) + (c * c))){
        printf("TRIANGULO RETANGULO\n");
    }
    if((a * a) > ((b * b) + (c * c))){
        printf("TRIANGULO OBTUSANGULO\n");
    }
    if((a * a) < ((b * b) + (c * c))){
        printf("TRIANGULO ACUTANGULO\n");
    }
    if(a == b && b == c){
        printf("TRIANGULO EQUILATERO\n");
    }
    if (((a == b) && (c != a)) || ((c == b) && (a != b)) || ((a == c) && (b != c))){
        printf("TRIANGULO ISOSCELES\n");
    }
    }


    return 0;
}
