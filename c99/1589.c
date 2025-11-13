#include <stdio.h>
 
int main() {
 
    int rep, r1, r2;
    
    scanf("%d", &rep);
    
    while(rep>0){
        scanf("%d %d", &r1, &r2);
        printf("%d\n", r1+r2);
        rep -= 1;
    }
 
    return 0;
}