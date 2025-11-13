#include <stdio.h>
 
int main() {
 
    int a, b, c;
    
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    
    if (a>b) {
        if (a>c) {
            printf("%d eh o maior\n", a);
        } else {
            printf("%d eh o maior\n", c);
        }
    } else {
        if (b>c) {
            printf("%d eh o maior\n", b);
        } else {
            printf("%d eh o maior\n", c);
        }
    }
    
    return 0;
}