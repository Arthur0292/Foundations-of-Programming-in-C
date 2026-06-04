#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    char citacao[100] = {"LIFE IS NOT A PROBLEM TO BE SOLVED"};

    for(int i = 0; i<n; i++){
        printf("%c", citacao[i]);
    }
    printf("\n");

    return 0;
}
