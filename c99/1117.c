#include <stdio.h>
 
int main() {
 
    double n1, n2;

    while(1){
        scanf("%lf", &n1);
        if (n1>=0 && n1<=10){
            break;
        }
        printf("nota invalida\n");
    }
    while(1){
        scanf("%lf", &n2);
        if (n2>=0 && n2<=10){
            break;
        }
        printf("nota invalida\n");
    }

    printf("media = %.2lf\n", (n1+n2)/2);

    return 0;
}