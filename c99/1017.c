#include <stdio.h>
 
int main() {
 
    int tempo, vel;
    float consumo;

    scanf("%d", &tempo);
    scanf("%d", &vel);
    
    consumo = (vel * tempo) / 12.0;
    
    printf("%.3f\n", consumo);
    return 0;
}