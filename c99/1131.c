#include <stdio.h>

int main()
{
    int golsInter, golsGremio, vitoriasInter, vitoriasGremio, empates;
    int contJogos, novoGrenal;
    vitoriasGremio = vitoriasInter = contJogos = empates = 0;

    while (1){
        scanf("%d %d", &golsInter, &golsGremio);

        contJogos += 1;

        if (golsInter > golsGremio){
            vitoriasInter += 1;
        }else if (golsGremio > golsInter){
            vitoriasGremio += 1;
        }else{
            empates += 1;
        }

        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &novoGrenal);

        if (novoGrenal == 2){
            break;
        }
    }

    printf("%d grenais\n", contJogos);
    printf("Inter:%d\n", vitoriasInter);
    printf("Gremio:%d\n", vitoriasGremio);
    printf("Empates:%d\n", empates);
    if (vitoriasInter > vitoriasGremio){
        printf("Inter venceu mais\n");
    }else if (vitoriasGremio > vitoriasInter){
        printf("Gremio venceu mais\n");
    }else{
        printf("Nao houve vencedor\n");
    }
    return 0;
}