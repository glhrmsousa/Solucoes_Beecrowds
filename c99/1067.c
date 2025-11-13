#include <stdio.h>
 
int main() {
    int n, i;
    
    scanf("%d", &n);
    i = 1;
    
    for(i; i <= n; i += 2){
        printf("%d\n", i);
    }
 
    return 0;
}