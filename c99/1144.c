#include <stdio.h>

int main()
{
    int c, n;
    double quadrado, cubo;

    scanf("%d", &n);

    for(c = 1; c <= n; c++){
        quadrado = pow(c, 2);
        cubo = pow(c, 3);
        printf("%d %.0lf %.0lf\n", c, quadrado, cubo);

        printf("%d %.0lf %.0lf\n", c, quadrado + 1, cubo + 1);   
    }

    return 0;
}