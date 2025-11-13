#include <stdio.h>
#include <string.h>

void ModificaPalavras (char entrada[]){
    char temporario[20005] = "";
    char *token;
    int first = 1;

    token = strtok(entrada, " ");
    while (token != NULL) {
        if (strlen(token) == 3){
            if (token[0] == 'U' && token[1] == 'R'){
                token[2] = 'I';
            } else if (token[0] == 'O' && token[1] == 'B'){
                token[2] = 'I';
            }
        }

        if (!first){
            strcat(temporario, " ");
        }
        strcat(temporario, token);
        first = 0;

        token = strtok(NULL, " ");
    }

    strcpy(entrada, temporario);
}


int main() {
    int tt, i;
    char lixo;

    scanf("%d", &tt);
    scanf("%c", &lixo);

    char palavras[tt * 20 + 2];

    fgets(palavras, sizeof(palavras), stdin);
    palavras[strcspn(palavras, "\n")] = '\0';

    ModificaPalavras(palavras);

    printf("%s\n", palavras);

    return 0;
}