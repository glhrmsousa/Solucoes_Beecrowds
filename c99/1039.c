#include <stdio.h>
#include <math.h>

int main()
{
    int r1, x1, y1, r2, x2, y2;
    int teste;
    double dist;

    teste = 0;

    while ((teste = scanf("%d %d %d %d %d %d", &r1, &x1, &y1, &r2, &x2, &y2)) != EOF) {
        if (teste != 6) {
            break;
        }
            dist = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));

        if (dist + r2 <= r1){
            printf("RICO\n");
        }else{
            printf("MORTO\n");
        }
    }


    return 0;
}