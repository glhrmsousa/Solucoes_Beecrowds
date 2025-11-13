#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    double a, b, c;

    scanf("%lf %lf %lf", &a, &b, &c);

    printf("TRIANGULO: %.3lf\n", 1.0*a*c/2);
    printf("CIRCULO: %.3lf\n", 1.0*c*c*3.14159);
    printf("TRAPEZIO: %.3lf\n", ((1.0*a+b)*c)/2);
    printf("QUADRADO: %.3lf\n", 1.0*b*b);
    printf("RETANGULO: %.3lf\n", 1.0*a*b);
}