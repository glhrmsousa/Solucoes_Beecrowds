#include <stdio.h>

int main()
{   
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (a==b||a==c||b==c||a==b+c||b==a+c||c==b+a){
        printf("S\n");
    }else{
        printf("N\n");
    }


    return 0;
}