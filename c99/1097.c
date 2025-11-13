#include <stdio.h>
 
int main() {
 
    int i, j, cont;
    j = 7;
    for (i = 1; i <= 9; i+=2){
        cont = 0;
            for(j; cont < 3; j--){
                printf("I=%d J=%d\n", i, j);
                cont++;
            }
        j += 5;
    }
    return 0;
}