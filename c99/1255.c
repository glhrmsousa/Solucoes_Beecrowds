#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (void){
    int letra, i = 0;
    int maior, rep;
    char frase[202];

    scanf("%d ", &rep);

    while(rep--  > 0){
        i = 0;
        int frequencia[26] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        fgets(frase, 202, stdin);
        frase[strcspn(frase, "\n")] = '\0';

        //Contagem da frequencia de cada letra
        while (frase[i] != '\0'){
            if (frase[i] >= 'A' && frase[i] <= 'Z'){
                frase[i] += 32; 
            }

            if (frase[i] >= 'a' && frase[i] <= 'z'){
            letra = frase[i] - 'a';
            frequencia[letra]++;
            }
            i++;
            
        }

        //Qual letra possui maior frequencia
        maior = 0;
        for (i = 0; i < 26; i++){
            if (frequencia[i] > frequencia[maior]){
                maior = i;
            }
        }

        if (frequencia[maior] > 0){
            for (i = 0; i < 26; i++){
                if (frequencia[i] == frequencia[maior]){
                    printf("%c", 'a' + i);
                }
            }
            printf("\n");
            }
    } 
}