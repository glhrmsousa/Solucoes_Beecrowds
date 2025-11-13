#include <stdio.h>
 
int main() {
 
    int i, n;
    
    scanf("%d", &n);
    i = 1;
    
    for(i; i <= n; i++){
        if (n % i == 0){
            printf("%d\n", i);
        }
    } 
    
    return 0;
}