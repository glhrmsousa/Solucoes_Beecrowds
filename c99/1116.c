#include <stdio.h>
 
int main() {
 
    int n1, n2, rep;
    double resultado;
    
    scanf("%d", &rep);
    
    while (rep > 0){
        scanf("%d %d", &n1, &n2);
        if (n2 == 0){
            printf("divisao impossivel\n");
        }else{
            resultado = 1.0*n1 / n2;
            printf("%.1lf\n", resultado);
        }
        
        rep--;
    }
    
    return 0;
}