#include <stdio.h>

int main(){
    
    double x = 0, y = 1, cont = 0;
    int resto;
    
    while(x <= 2.1){
        for(int i = 0; i<1; i++){
            for(int j = 0; j<3; j++){
                int x_inteiro = (int)(x * 10 + 0.5);
                if (x_inteiro % 10 == 0){
                    int a = x_inteiro / 10;
                    int b = (int)(y + 0.5);
                    printf("I=%d J=%d\n", a, b);
                    y++;
                }else{
                    printf("I=%.1lf J=%.1lf\n", x, y);
                    y++;
                }
                cont++;
            }
            x += 0.2;
            y -= 3;
            y += 0.2;
            y = (int)(y * 10 + 0.5) / 10.0;
        }
    }


    return 0;
}
