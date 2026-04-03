#include <stdio.h>

int main() {

    int dias, a, m, d, temp;

    scanf("%d", &dias);

    a = dias/365;
    temp = dias%365;
    m = temp/30;
    d = temp%30;

    printf("%d ano(s)\n", a);
    printf("%d mes(es)\n", m);
    printf("%d dia(s)\n", d);

    return 0;
}
