#include <stdio.h>
 
int main() {
 
    int num, horas;
    double salariohora;
    
    scanf("%d %d %lf", &num, &horas, &salariohora);
    
    printf("NUMBER = %d\n", num);
    printf("SALARY = U$ %.2lf\n", horas*salariohora);
    
    return 0;
}