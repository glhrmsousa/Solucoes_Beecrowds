#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    double fixo, vendas, salario;
    char nome[100];

    scanf("%s", &nome);
    scanf("%lf %lf", &fixo, &vendas);

    salario = fixo + vendas * 0.15;

    printf("TOTAL = R$ %.2lf\n", salario);


    return 0;
}