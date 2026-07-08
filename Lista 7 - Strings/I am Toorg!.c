#include <stdio.h>
#include <string.h>

int main() {

    int n;
    char pergunta[1000];
    scanf("%d", &n);

    for(int i = 0; i<n; i++){
        scanf(" %[^\n]", pergunta);
        printf("I am Toorg!\n");
    }


    return 0;
}
