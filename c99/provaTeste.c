#include <stdio.h>
#include <string.h>

int VerificaEspaco (char frase[]){
    int i = 0, cont = 1;
    int len = strlen(frase);

    for (i = 0; i < len; i++){
        if (frase[i] == ' '){
            cont++;
        }
    }
    return cont;


}
int main () {
    char frase[10000];

    fgets(frase, 10000, stdin);
    frase[strcspn(frase, "\n")] = '\0';
    printf("%d\n", VerificaEspaco(frase));
    
    return 0;
}