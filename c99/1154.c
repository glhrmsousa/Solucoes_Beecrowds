#include <stdio.h>
 
int main() {
 
    int idade, soma, pessoas;
    idade = 0;
    soma = 0;
    pessoas = 0;
    
    while (idade>=0){
        scanf("%d", &idade);
        if (idade < 0){
            break;
        }
        soma += idade;
        pessoas += 1;
    }   
    printf("%.2lf\n", 1.0 * soma/pessoas);
    return 0;
}