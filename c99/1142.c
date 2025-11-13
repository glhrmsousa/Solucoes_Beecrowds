#include <stdio.h>
 
int main() {
    int rep, i, cont;
    cont = 0;
    scanf("%d", &rep);
    
    for (i = 1; cont < rep; i++){
        if (i % 4 == 0){
            printf("PUM\n");
            cont++;
        }else{
            printf("%d ", i);
        }

    }
        
    return 0;
}