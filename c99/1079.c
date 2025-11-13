#include <stdio.h>
 
int main() {
 
    int rep;
    double n1, n2, n3;
    
    scanf("%d", &rep);
    
    while (rep > 0){
        scanf("%lf %lf %lf", &n1, &n2, &n3);
        n1 *= 2;
        n2 *= 3;
        n3 *= 5;
        printf("%.1lf\n", (n1+n2+n3)/10);
        rep--;
    }
    return 0;
}