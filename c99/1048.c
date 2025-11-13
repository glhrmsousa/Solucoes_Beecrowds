#include <stdio.h>
 
int main() {
 
    double salario, novoSalario, reajuste, porcentagem;
    
    scanf("%lf", &salario);
    
    if (salario > 0 && salario <= 400){
        reajuste = 1.15;
    }else if (salario > 400 && salario <= 800){
        reajuste = 1.12;
    }else if (salario > 800 && salario <= 1200){
        reajuste = 1.10;
    }else if (salario > 1200 && salario <= 2000){
        reajuste = 1.07;
    }else if (salario > 2000){
        reajuste = 1.04;
    }
    novoSalario = salario * reajuste;
    porcentagem = reajuste * 100 - 100;
    reajuste = novoSalario - salario;

    printf("Novo salario: %.2lf\n", novoSalario);
    printf("Reajuste ganho: %.2lf\n", reajuste);
    printf("Em percentual: %.0lf %%\n", porcentagem);
}