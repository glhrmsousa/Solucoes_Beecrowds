#include <stdio.h>

int main()
{
    double salario, imposto, resto;
    imposto = 0;

    scanf("%lf", &salario);

    if (salario > 4500){
        imposto += (salario-4500)*0.28;
        resto = 4500;
    }else{
        resto = salario;
    }
    if (resto > 3000){
        imposto += (resto - 3000)*0.18;
        resto = 3000;
    }
    if (resto > 2000){
        imposto += (resto - 2000)*0.08;
    }

    if (imposto == 0){
        printf("Isento\n");
    }else{
        printf("R$ %.2lf\n", imposto);
    }
    return 0;
}