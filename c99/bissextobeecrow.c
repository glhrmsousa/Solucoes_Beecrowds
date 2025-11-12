#include <stdio.h>
#include <math.h>
 
int main() {
    long long int ano;
    int teste;
    int ehLeap, ehHuluculu, ehBulukulu;
    ehLeap = ehHuluculu = ehBulukulu = 0;

    while ((teste = scanf("%lld", &ano)) != EOF){
        if (teste != 1){
            break;
        }

        if ((ano%4 == 0 && ano%100 != 0) || ano%400 == 0){
            ehLeap = 1;
            printf("This is leap year.\n");
        }

        if (ano % 15 == 0){
            ehHuluculu = 1;
            printf("This is huluculu festival year.\n");
        }

        if (ehLeap && ano % 55 == 0){
            ehBulukulu = 1;
            printf("This is bulukulu festival year.\n");
        }

        if(ehLeap == 0 && ehHuluculu == 0 && ehBulukulu == 0){
            printf("This is an ordinary year.\n");
        }        
    }

    return 0;
}