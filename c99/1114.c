#include <stdio.h>
 
int main() {
 
    int teste, senha;
    
    senha = 2002;
    
    teste = senha-1;
    
    while (teste != senha){
        scanf("%d", &teste);
        if (teste != senha){
            printf("Senha Invalida\n");
        }else{
            printf("Acesso Permitido\n");
            break;
        }
    }
 
    return 0;
}