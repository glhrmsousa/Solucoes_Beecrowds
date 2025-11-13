#include <stdio.h>

int main() {
    int casos;
    int pa, pb; //população de a e b, respectivamente
    double g1, g2; //taxa de crescimento de a e b, respectivamente
    int contAnos;


    scanf("%d", &casos);

    while (casos-- > 0){
        contAnos = 0;
        
        scanf("%d%d%lf%lf", &pa, &pb, &g1, &g2);
        
        g1 = (g1 / 100) + 1;
            if (g2 != 0){
                g2 = (g2 / 100) + 1;
            }

        while (pa <= pb){
            pa *= g1;
            if (g2 != 0){
                pb *= g2;
            }

            contAnos++;
            if (contAnos > 100){
                break;
            }
        }
        if (contAnos > 100){
            printf("Mais de 1 seculo.\n");
        }else{
            printf("%d anos.\n", contAnos);
        }
    }
    return 0;
}