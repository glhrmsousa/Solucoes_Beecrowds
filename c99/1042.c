#include <stdio.h>
 
int main() {
 
    int a, b, c, maior, meio, menor;
    
    scanf("%d %d %d", &a, &b, &c);
    
    if (a>=b && a>=c){
        maior = a;
        if (b>c){
            meio = b;
            menor = c;
        }else{
            meio = c;
            menor = b;
        }
    }else if (b>=a && b>=c){
        maior = b;
        if (a>c){
            meio = a;
            menor = c;
        }else{
            meio = c;
            menor = a;
        }
    }else{
        maior = c;
        if (b>a){
            meio = b;
            menor = a;
        }else{
            meio = a;
            menor = b;
        }
    }
    
    printf("%d\n%d\n%d\n\n", menor, meio, maior);
    printf("%d\n%d\n%d\n", a, b, c);
    
 
    return 0;
}