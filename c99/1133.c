#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int n1, n2, maior, menor;

    scanf("%d %d", &n1, &n2);
    if (n1>n2){
        maior = n1;
        menor = n2;
    }else{
        maior = n2;
        menor = n1;
    }
    menor +=1;

    while(menor!=maior){
        if(menor % 5 == 2 || menor % 5 == 3){
            printf("%d\n", menor);
        }
        menor += 1;
    }
    return 0;
}