#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void ReordenacaoStrings(int qtd, char numes[qtd][6]) {
    for (int i = 1; i < qtd; i++) {
        char chave[6];
        memcpy(chave, numes[i], sizeof(chave));
        int valChave = (int)strtol(chave, NULL, 10);

        int j = i - 1;
        while (j >= 0) {
            int valJ = (int)strtol(numes[j], NULL, 10);
            if (valJ <= valChave) break;
            memcpy(numes[j + 1], numes[j], sizeof(numes[j]));
            j--;
        }
        memcpy(numes[j + 1], chave, sizeof(chave));
    }
}

int main(void) {
    int qtd, i;
    char lixo;

    while ((scanf("%d%c", &qtd, &lixo)) != EOF){ 

        char nums[qtd][6]; 

        for (i = 0; i < qtd; i++) {
            fgets(nums[i], 6, stdin);                     
            nums[i][strcspn(nums[i], "\n")] = '\0';       
        }

        ReordenacaoStrings(qtd, nums);

        for (i = 0; i < qtd; i++) {
            printf("%s\n", nums[i]);
        }
    }

    return 0;
}