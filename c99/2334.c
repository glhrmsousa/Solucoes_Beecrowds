#include <stdio.h>
 
int main() {
 
    unsigned long long int p, pf;
    
    while (1){
        scanf("%llu", &p);
        if (p == -1){
            break;
        }
        if (p <= 0){
            pf = 0;
        }else{
            pf = p - 1;
        }
        
        printf("%llu\n", pf);
    }
 
    return 0;
}