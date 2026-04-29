#include <stdio.h>

void dobrar(int* ptr) {
    *ptr = (*ptr)*2;
}
int main() {
    int n = 1, i;
    for (i = 0; i < 10; i++) {
    dobrar(&n);
    printf("%d\n",n);

}

return 0;
}
