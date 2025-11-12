#include <stdio.h>

const int MAT_A = 5;
const int MAT_B = 5;



int main()
{
    int a, *b, c;
    a = MAT_A + MAT_B;
    b = &a;
    c = MAT_B;
    scanf("%d", b);
    printf("%d %d\n", a, c);
    

    return 0;
}