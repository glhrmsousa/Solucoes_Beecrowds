#include <stdio.h>

int main()
{
    int dia, mes;

    scanf("%d/%d", &dia, &mes);

    switch (mes)
    {
    case 1:
        if (dia <= 19){
            puts("capricornio");
        }else{
            puts("aquario");
        }
        break;
    case 2:
        if (dia <= 18){
            puts("aquario");
        }else{
            puts("peixes");
        }
        break;
    case 3:
        if (dia <= 20){
            puts("peixes");
        }else{
            puts("aries");
        }
        break;
    case 4:
        if (dia <= 20){
            puts("aries");
        }else{
            puts("touro");
        }
        break;
    case 5:
        if (dia <= 20){
            puts("touro");
        }else{
            puts("gemeos");
        }
        break;
    case 6:
        if (dia <= 20){
            puts("gemeos");
        }else{
            puts("cancer");
        }
        break;
    case 7:
        if (dia <= 22){
            puts("cancer");
        }else{
            puts("leao");
        }
        break;
    case 8:
        if (dia <= 22){
            puts("leao");
        }else{
            puts("virgem");
        }
        break;
    case 9:
        if (dia <= 22){
            puts("virgem");
        }else{
            puts("libra");
        }
        break;
    case 10:
        if (dia <= 22){
            puts("libra");
        }else{
            puts("escorpiao");
        }
        break;
    case 11:
        if (dia <= 21){
            puts("escorpiao");
        }else{
            puts("sargitario");
        }
        break;
    case 12:
        if (dia <= 21){
            puts("sargitario");
        }else{
            puts("capricornio");
        }
        break;
    }
    return 0;
}