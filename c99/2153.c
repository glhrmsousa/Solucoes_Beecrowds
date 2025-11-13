#include <stdio.h>
#include <string.h>

void CorrigePalavra (char *entrada){
    int i, tam;
    int len = strlen(entrada);
    int teste;

    for (int tam = 1; tam <= len; tam++){
        teste = strncmp(entrada + (len - 2*tam), entrada + (len - tam), tam);
        if (teste == 0){
            entrada[len-tam] = '\0';
            return;
        }
    }
    
}


int main(void) {
    char palavra[32];


    while(fgets(palavra, sizeof(palavra), stdin) != NULL){
        palavra[strcspn(palavra, "\n")] = '\0';
        CorrigePalavra(palavra);
        printf("%s\n", palavra);
    }
    return 0;
}