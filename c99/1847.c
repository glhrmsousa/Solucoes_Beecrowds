#include <stdio.h>

/****
* AnalisaInverno(): Calcula a felicidade da populacao com a variacao de temperatura no inverno.
*
* Parametros:
*    T1 (entrada): temperatura da primeiro dia.
*    T2 (entrada): temperatura da segundo dia.
*    T3 (entrada): temperatura da terceiro dia.
*
* Retorno: retorna 1 caso a populacao esteja feliz e 0 caso esteja triste.
****/
int AnalisaInverno (int T1, int T2, int T3){
    int dif1 = T2 - T1, dif2 = T3 - T2;

    if (dif1 == 0)              return dif2 > 0;               // igualdade no 1º->2º
    if (dif1 < 0 && dif2 >= 0)  return 1;                      // caiu e depois subiu/igual
    if (dif1 > 0 && dif2 <= 0)  return 0;                      // subiu e depois caiu/igual
    if (dif1 > 0 && dif2 > 0)   return dif2 >= dif1;           // subiu e subiu mais/igual
    if (dif1 < 0 && dif2 < 0)   return (T2 - T3) < (T1 - T2);  // caiu e caiu menos
}



int main() {
    int dia1, dia2, dia3;
    int retorno;

    scanf("%d%d%d", &dia1, &dia2, &dia3);
    retorno = AnalisaInverno (dia1, dia2, dia3);

    switch (retorno)
    {
    case 1:
        printf(":)\n");
        break;

    case 0:
        printf(":(\n");
        break;
    
    default:
        break;
    }

    return 0;
}