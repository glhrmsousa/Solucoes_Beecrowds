#include <stdio.h>
 
int main() {
 
    float a, b ,c;
    char triangulo;
    float area, perimetro;
    
    scanf("%f %f %f", &a, &b, &c);
    
    if (a>=b+c || b>=a+c || c>=a+b) {
        triangulo = 'n';
    } else {
        triangulo = 's';
    }
    
    if (triangulo == 's') {
        perimetro = a + b + c;
        printf("Perimetro = %.1f\n", perimetro);
    } else {
        area = (a+b)*c / 2;
        printf("Area = %.1f\n", area);
    }
    
    
 
    return 0;
}