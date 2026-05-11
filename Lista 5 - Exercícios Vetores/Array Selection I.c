#include <stdio.h>

int main() {
    double array[100];

    for(int i = 0; i < 100; i++) {
        scanf("%lf", &array[i]);
    }

    for(int i = 0; i < 100; i++) {
        if(array[i] <= 10.0) {
            
            printf("A[%d] = %.1lf\n", i, array[i]);
        }
    }

    return 0;
}
