#include <stdio.h>
 
int main() {
    int x_divisa, y_divisa, rep, x, y;
    char c1, c2;

    while(1){ 
        scanf("%d", &rep);
        if (rep == 0){
            break;
        }
        scanf("%d %d", &x_divisa, &y_divisa);
        while (rep > 0){
            scanf("%d %d", &x, &y);
            if (x>x_divisa){
                c1 = 'E';
            }else if (x<x_divisa){
                c1 ='O';
            }
            if (y>y_divisa){
                c2 = 'N';
            }else if(y<y_divisa){
                c2 = 'S';
            }

            if(x==x_divisa || y==y_divisa){
                printf("divisa\n");
            }else{
                printf("%c%c\n", c2, c1);
            }


            rep--;
        }
    }
    return 0;
}