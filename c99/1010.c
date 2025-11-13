#include <stdio.h>
 
int main() {
 
    int cod1, pec1, cod2, pec2;
    float val1, val2, tot;
    
    scanf("%d", &cod1);
    scanf("%d", &pec1);
    scanf("%f", &val1);
    
    scanf("%d", &cod2);
    scanf("%d", &pec2);
    scanf("%f", &val2);
    
    tot = (val1 * pec1) + (val2 * pec2);
    
    printf("VALOR A PAGAR: R$ %.2f\n", tot);
    
 
    return 0;
}