#include <stdio.h>
 
int main() {
 
    int i, cont;
    double n;
    i = 6;
    cont = 0;
    
    while (i>0){
        scanf("%lf", &n);
        if (n>0){
            cont+=1;
        }
        i--;
    }
    printf("%d valores positivos\n", cont);
 
    return 0;
}