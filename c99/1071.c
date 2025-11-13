#include <stdio.h>

int main()
{
    int soma, n1, n2, maior, menor;
    soma = 0;
    
    scanf("%d %d", &n1, &n2);

    if (n1>n2){
        maior = n1;
        menor = n2;
    }else{
        maior = n2;
        menor = n1;
    }
    menor++; 

    while (menor<maior){
        if (menor % 2 != 0){
            soma += menor;
        }
        menor++;
    }
    printf("%d\n", soma);




    return 0;
}