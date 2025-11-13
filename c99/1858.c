#include <stdio.h>
 
int main() {
 
    int rep, n, menor, pos, i;
    menor = 99999;
    i = 0;
    scanf("%d", &rep);

    while (rep>0){
        scanf("%d", &n);
        i++;
        if (n<menor){
            menor = n;
            pos = i;
        }
        rep--;
    }
    printf("%d\n", pos);
}