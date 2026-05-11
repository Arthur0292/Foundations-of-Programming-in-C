#include <stdio.h>

int main() {
    int N, M, carimbo;
    int album[101] = {0}; 
    int compradas_unicas = 0;

    scanf("%d", &N);
    scanf("%d", &M);

    for (int i = 0; i < M; i++) {
        scanf("%d", &carimbo);
        if (album[carimbo] == 0) {
            album[carimbo] = 1;
            compradas_unicas++;
        }
    }

    printf("%d\n", N - compradas_unicas);

    return 0;
}
