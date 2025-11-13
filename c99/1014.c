#include <stdio.h>
 
int main() {
 
    int dist;
    double comb;
    
    scanf("%d %lf", &dist, &comb);
    printf("%.3lf km/l\n", 1.0*dist/comb);
 
    return 0;
}