#include <stdio.h>
#include <string.h>

int VerificaResistencia (char seq[105], char res [105], int t){
    char *myPtr = strstr(seq, res);
    if (myPtr != NULL) {
        return 1;
    } else {
        return 0;
    }

}


int main() {
    char seq[105]; //sequencia da pessoa
    char res[105]; //sequencia de resistencia
    int t, resistencia;

    while(fgets(seq, sizeof(seq), stdin) != NULL){
        seq[strcspn(seq, "\n")] = '\0';
        fgets(res, sizeof(res), stdin);
        res[strcspn(res, "\n")] = '\0';

        t = strlen(seq);
        resistencia = VerificaResistencia (seq, res, t);

        if (resistencia){
            puts("Resistente");
        } else {
            puts("Nao resistente");
        }
    }
    return 0;
}