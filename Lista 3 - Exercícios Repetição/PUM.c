#include <stdio.h>

int main() {
    
    int n, x = 1;
    scanf("%d", &n);


    for(int i = 0; i<n; i++){
        for(int j = 0; j<1; j++){
            printf("%d", x);
            printf(" ");
            x ++;
            printf("%d", x);
            printf(" ");
            x ++;
            printf("%d", x);
            printf(" ");
            x ++;
            printf("PUM\n");
            x ++;
        }
    }
    return 0;
}
