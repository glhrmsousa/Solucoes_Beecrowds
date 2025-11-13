#include <stdio.h>

int main()
{
    int i;
    double n;

    
    for (i = 0; i < 100; i++){
        scanf("%lf", &n);

        if (n <= 10){
            printf("A[%d] = %.1lf\n", i, 1.0*n);
        }
    }  
    
    return 0;
}