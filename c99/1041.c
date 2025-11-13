#include <stdio.h>

int main()
{
    float nx, ny;
    
    scanf("%f %f", &nx, &ny);
    
    if (nx > 0) {
        if (ny > 0){
            printf("Q1\n");
        } else if (ny < 0) {
            printf("Q4\n");
        } else {
            printf("Eixo X");
        }
        
    } else if (nx < 0) {
        if (ny > 0) {
            printf("Q2\n");
        } else if (ny < 0) {
            printf("Q3\n");
        } else {
            printf("Eixo X\n");
        }
    } else {
        if (ny > 0) {
            printf("Eixo Y\n");
        } else if (ny < 0) {
            printf("Eixo Y\n");
        } else {
        printf("Origem\n");
        }
    }
    return 0;
}