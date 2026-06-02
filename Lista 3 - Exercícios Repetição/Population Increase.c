#include <stdio.h>
#include <string.h>

int main(){
   
    int n , pa, pb, porA, porB, anos = 0;
    double ga, gb;
    scanf("%d", &n);

    for(int i = 0; i<n; i++){
        scanf("%d", &pa);
        scanf("%d", &pb);
        
        scanf("%lf", &ga);
        scanf("%lf", &gb);

        while(pa <= pb){
            porA = pa * (ga/100);
            porB = pb * (gb/100);
            pa += porA;
            pb += porB;
            anos++;
            if(anos > 100){
                break;
            }
        }

        if(anos <= 100){
            printf("%d anos.\n", anos);
        }else{
            printf("Mais de 1 seculo.\n");
        }
        
        anos = 0;
    }

    
    return 0;
}
