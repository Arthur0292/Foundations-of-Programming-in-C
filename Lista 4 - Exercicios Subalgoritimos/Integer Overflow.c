#include <stdio.h>
int fat(int n) {
    int ret = 1, i;
    if (n == 0) return 1;

    for (i = 2; i <= n; i++) ret = (ret*i);

    return ret;
}
int main() {
    printf("fat(5) = %d\n",fat(5));
    printf("fat(10) = %d\n",fat(10));
    printf("fat(100) = %d\n",fat(100));
//Are the values correct? No, because fat(100) results in 0, which is mathematically incorrect.
//Why does this happen? The program triggers an integer overflow due to the storage limits of the int data type.

    return 0;
}
