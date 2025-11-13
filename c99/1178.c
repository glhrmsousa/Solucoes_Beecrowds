#include <stdio.h>
 
int main() {
 
    double x, vetor[100];
    int i = 0;
    
    scanf("%lf", &x);
    vetor[0] = x;
    
    while (i < 100){
        printf("N[%d] = %.4lf\n", i, vetor[i]);
        i++;
        vetor[i] = vetor[i-1] / 2;
    }
    
 
    return 0;
}