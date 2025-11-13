#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int RemoveSete (int num){
    int i = 0;
    char strin[100000];
    sprintf(strin, "%d", num);

    while(strin[i] != '\0'){
        if (strin[i] == '7'){
            strin[i] = '0';
        }
        i++;
    }

    num = atoi(strin);
    return num;
}


int main (void){
    int n1, n2, n3, i = 0;
    char operador;

    scanf("%d %c %d", &n1, &operador, &n2);

    n1 = RemoveSete(n1);
    n2 = RemoveSete(n2);

    if (operador == '+'){
        n3 = n1 + n2;
    } else if (operador == 'x'){
        n3 = n1 * n2;
    }

    n3 = RemoveSete(n3);

    printf("%d\n", n3);
    return 0;
}