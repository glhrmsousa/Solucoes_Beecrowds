#include <stdio.h>

int main()
{
    int not_cem, not_cinq, not_vint, not_dez, not_cinco, not_dois;
    int moe_um, moe_cinq, moe_vtcinc, moe_dez, moe_cinco, moe_umcent;
    double valor, resto;
   
    scanf("%lf", &valor);

    /*notas*/
    not_cem = valor / 100;
    resto = valor - (not_cem * 100);
    not_cinq = resto / 50;
    resto = resto - (not_cinq * 50);
    not_vint = resto / 20;
    resto = resto - (not_vint * 20);
    not_dez = resto / 10;
    resto = resto - (not_dez * 10);
    not_cinco = resto / 5;
    resto = resto - (not_cinco * 5);
    not_dois = resto / 2;
    resto = resto - (not_dois * 2);
    
    /*moedas*/
    moe_um = resto / 1;
    resto = resto - (moe_um * 1);
    moe_cinq = resto / 0.5;
    resto = resto - (moe_cinq * 0.5);
    moe_vtcinc = resto / 0.25;
    resto = resto - (moe_vtcinc * 0.25);
    moe_dez = resto / 0.10;
    resto = resto - (moe_dez * 0.10);
    moe_cinco = resto / 0.05;
    resto = resto - (moe_cinco * 0.05);
    moe_umcent = resto / 0.01;
    
    puts("NOTAS:");
    printf("%d nota(s) de R$ 100.00\n", not_cem);
    printf("%d nota(s) de R$ 50.00\n", not_cinq);
    printf("%d nota(s) de R$ 20.00\n", not_vint);
    printf("%d nota(s) de R$ 10.00\n", not_dez);
    printf("%d nota(s) de R$ 5.00\n", not_cinco);
    printf("%d nota(s) de R$ 2.00\n", not_dois);
    puts("MOEDAS:");
    printf("%d moeda(s) de R$ 1.00\n", moe_um);
    printf("%d moeda(s) de R$ 0.50\n", moe_cinq);
    printf("%d moeda(s) de R$ 0.25\n", moe_vtcinc);
    printf("%d moeda(s) de R$ 0.10\n", moe_dez);
    printf("%d moeda(s) de R$ 0.05\n", moe_cinco);
    printf("%d moeda(s) de R$ 0.01\n", moe_umcent);
    
    return 0;
}