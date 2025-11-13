#include <stdio.h>
 
int main() {
 
    int ddd;
    scanf("%d", &ddd);
    
    if(ddd==61){
        puts("Brasilia");
    }else if(ddd==71){
        puts("Salvador");
    }else if(ddd==11){
        puts("Sao Paulo");
    }else if(ddd==21){
        puts("Rio de Janeiro");
    }else if(ddd==32){
        puts("Juiz de Fora");
    }else if(ddd==19){
        puts("Campinas");
    }else if(ddd==27){
        puts("Vitoria");
    }else if(ddd==31){
        puts("Belo Horizonte");
    }else{
        puts("DDD nao cadastrado");
    }
 
    return 0;
}