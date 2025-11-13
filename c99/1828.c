#include <stdio.h>
#include <string.h>

int VerificaConfronto (char personagem1[], char personagem2[]){
    const char *arr[10][2] = {{"tesoura" , "papel"},
                              {"papel", "pedra"},
                              {"pedra", "lagarto"},
                              {"lagarto", "Spock"},
                              {"Spock", "tesoura"},
                              {"tesoura" , "lagarto"},
                              {"lagarto", "papel"},
                              {"papel", "Spock"},
                              {"Spock", "pedra"},
                              {"pedra", "tesoura"}};
    int i;
    for (i = 0; i < 10; i++){
        if ((strcmp(personagem1, arr[i][0]) == 0) && (strcmp(personagem2, arr[i][1]) == 0)){
            return 1;
        } else if ((strcmp(personagem1, arr[i][1]) == 0) && (strcmp(personagem2, arr[i][0]) == 0)){
            return 2;
        }
    }

    return 0;
}


int main() {
    char personagem1[20];
    char personagem2[20];
    int tt, resultado;
    char lixo;

    scanf("%d", &tt);
    scanf("%c", &lixo);

    for (int i = 0; i < tt; i++){
        scanf("%s %s", personagem1, personagem2);
        
        resultado = VerificaConfronto(personagem1, personagem2);

        switch (resultado)
        {
        case 0:
            printf("Caso #%d: De novo!\n", i);
            break;
        
        case 1:
            printf("Caso #%d: Bazinga\n", i);
            break;

        case 2:
            printf("Caso #%d: Raj trapaceou!\n", i);
            break;
        
        default:
            break;
        }
    }
    return 0;
}