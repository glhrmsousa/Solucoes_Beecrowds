#include <stdio.h>

int main()
{
    
    int n1, n2, mdc, repeticoes, resto;

    scanf("%d", &repeticoes);

    for(int i = 0; i < repeticoes; i++){
        scanf("%d %d", &n1, &n2);
        
        if (n2 < n1){
            int c = n2;
            n2 = n1;
            n1 = c;
        }
        
        while (n2 != 0) {
            resto = n1 % n2;
            n1 = n2;
            n2 = resto;
        }
            mdc = n1;
        
    printf("%d\n", mdc);
    }
    return 0;
}