#include <stdio.h>
 
int main() {
 
    int n, i, fac;
    i = 1;
    fac = 1;
    
    scanf("%d", &n);
    
    for(i; i <= n; i++){
        fac *= i;
    }
    printf("%d\n", fac);
    
 
    return 0;
}