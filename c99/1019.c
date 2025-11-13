#include <stdio.h>
 
int main() {
 
    int hor, min, seg;
    
    scanf("%d", &seg);
    
    min = seg / 60;
    seg = seg % 60;
    
    hor = min / 60;
    min = min % 60;
    
    printf("%d:%d:%d\n", hor, min, seg);
 
    return 0;
}