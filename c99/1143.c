#include <stdio.h>
#include <math.h>
 
int main() {
 
    int n, i;
    double quadrado, cubo;
    
    scanf("%d", &n);
    
    for(i = 1; i <= n; i++){
        quadrado = pow(i, 2);
        cubo = pow(i, 3);
        printf("%d %.0lf %.0lf\n", i, quadrado, cubo);
    }
 
    return 0;
}