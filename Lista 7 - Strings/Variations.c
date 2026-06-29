#include <stdio.h>
#include <string.h>

int main() {

    char senha[100];

    int n, mul = 1;
    scanf("%d", &n);

    for(int i = 0; i<n; i++){
        scanf("%s", senha);
        int tamanho = strlen(senha);
        for(int j = 0; j<tamanho; j++){
            if(senha[j] == 'A' || senha[j] == 'a' || senha[j] == 'E' || senha[j] == 'e' || senha[j] == 'I' || senha[j] == 'i' || senha[j] == 'O' || senha[j] == 'o' || senha[j] == 'S' || senha[j] == 's'){
                mul *= 3;
            }else{
                mul *= 2;
            }
        }

        printf("%d\n", mul);

        mul = 1;

    }



    return 0;
}
