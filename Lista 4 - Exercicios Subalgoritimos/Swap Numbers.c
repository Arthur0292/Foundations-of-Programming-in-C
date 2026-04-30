#include <stdio.h>

void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void processar(int x, int y) {
    printf("%d\t%d\t ", x, y);
    trocar(&x, &y);
    printf("%d\t%d\n", x, y);
}

int main() {

    processar(1, 2);
    processar(3, 7);
    processar(-5, -3);
    processar(0, 4);
    processar(11, 32);
    processar(1009, 567);

    return 0;
}
