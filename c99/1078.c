#include <stdio.h>
 
int main() {
     int n, i, tab;
    
    scanf("%d", &n);
    
    for (i = 1; i <= 10; i++){
        tab = i*n;
        printf("%d x %d = %d\n", i, n, tab);
    }
    
    return 0;
}