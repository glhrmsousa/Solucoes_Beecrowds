#include <stdio.h>

int main()
{
    int codigo, alcool, gasolina, diesel;
    alcool = gasolina = diesel = 0;

    while (1){
        codigo = 0;
        while (codigo < 1 || codigo > 4){
            scanf("%d", &codigo);
        }

        if (codigo == 4){
            break;
        }else if (codigo == 1){
            alcool += 1;
        }else if (codigo == 2){
            gasolina += 1;
        }else if (codigo == 3){
            diesel += 1;
        }
    }

    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", alcool);
    printf("Gasolina: %d\n", gasolina);
    printf("Diesel: %d\n", diesel);

    return 0;
}