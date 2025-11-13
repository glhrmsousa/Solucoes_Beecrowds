#include <stdio.h>
#include <string.h>

int ContadorDeLeds (char frase[]){
    int i, contLeds = 0;
    for (i = 0; frase[i] != '\0'; i++){
        switch (frase[i])
        {
        case '1':
            contLeds += 2;
            break;
        case '7':
            contLeds += 3;
            break;
        case '4':
            contLeds += 4;
            break;
        case '2':
        case '3':
        case '5':
            contLeds += 5;
            break;
        case '0':
        case '6':
        case '9':
            contLeds += 6;
            break;
        case '8':
            contLeds += 7;
            break;
        
        default:
            break;
        }

    }

    return contLeds;

}


int main() {
    int qtd, resultado;

    scanf("%d", &qtd);

    while(qtd-- > 0){
        char frase[101];

        scanf("%s", frase);

        resultado = ContadorDeLeds(frase);

        printf("%d leds\n", resultado);
    }


    return 0;
}