#include <stdio.h>
 
int main() {
 
    int rep, numero, sapos, ratos, coelhos, totalCobaias;
    char especie;
    double percentuaCoelhos, percentualRatos, percentualSapos;
    sapos = coelhos = ratos = totalCobaias = 0;
    scanf("%d", &rep);
    
    while (rep > 0){
        scanf("%d %c", &numero, &especie);
        
        switch (especie){
            case 'C':
                coelhos += numero;
                break;
            case 'R':
                ratos += numero;
                break;
            case 'S':
                sapos += numero;
                break;
        }
        
        totalCobaias += numero;
        rep--;
    }
    
    percentuaCoelhos = (1.0*coelhos/totalCobaias)*100;
    percentualRatos = (1.0*ratos/totalCobaias)*100;
    percentualSapos = (1.0*sapos/totalCobaias)*100;
    
    
    printf("Total: %d cobaias\n", totalCobaias);
    printf("Total de coelhos: %d\n", coelhos);
    printf("Total de ratos: %d\n", ratos);
    printf("Total de sapos: %d\n", sapos);
    printf("Percentual de coelhos: %.2lf %%\n", percentuaCoelhos);
    printf("Percentual de ratos: %.2lf %%\n", percentualRatos);
    printf("Percentual de sapos: %.2lf %%\n", percentualSapos);
    return 0;
}