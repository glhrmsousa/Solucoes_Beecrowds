#include <stdio.h>
#include <string.h>

int ValidadorDeSenhas (char senha[]){
    int i;
    int tamanho = strlen(senha);
    int temMaiusculas = 0, temMinusculas = 0, temNumeros = 0;
    int temOutros = 0;

    if (tamanho < 6 || tamanho > 32){
        return 0;
    }

    for (i = 0; senha[i] != '\0'; i++){
        if ((int) senha[i] >= 65 && (int) senha[i] <= 90){
            temMaiusculas = 1;
        } else if ((int) senha[i] >= 97 && (int) senha[i] <= 122){
            temMinusculas = 1;
        } else if ((int) senha[i] >= 48 && (int) senha[i] <= 57){
            temNumeros = 1;
        } else {
            temOutros = 1;
            break;
        }
    }

    if(temMaiusculas && temMinusculas && temNumeros && !temOutros){
        return 1;
    } else {
        return 0;
    }
}


int main() {
    int validade;
    char senha[101];

    while(fgets(senha, sizeof(senha), stdin) != NULL){
        senha[strcspn(senha, "\n")] = '\0';
        validade = ValidadorDeSenhas(senha);

        if (validade){
            printf("Senha valida\n");
        } else{
            printf("Senha invalida\n");
        }
    }

    return 0;
}