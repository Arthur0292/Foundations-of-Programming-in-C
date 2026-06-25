#include <stdio.h>
#include <string.h>

double recursiva(double n){

    if(n != 0){
        return (1.0 / (6.0 + recursiva(n -1)));
    }else{
        return 0;
    }

}

int main() {

    int n;
    scanf("%d", &n);

    double x;
    if(n == 0){
        x = 3;
    }else{
        x = 3 + recursiva(n);
    }

    printf("%.10lf\n", x);
    
    

    return 0;
}
