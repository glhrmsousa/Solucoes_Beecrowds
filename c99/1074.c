#include <stdio.h>
 
int main() {
 
    int rep, n;
    
    scanf("%d", &rep);
    
    while (rep>0){
        scanf("%d", &n);
        if (n%2==0 && n>0){
            printf("EVEN POSITIVE\n");
        }else if (n%2==0 && n<0){
            printf("EVEN NEGATIVE\n");
        }else if (n%2!=0 && n>0){
            printf("ODD POSITIVE\n");
        }else if (n&2!=0 && n <0){
            printf("ODD NEGATIVE\n");
        }else{
            printf("NULL\n");
        }
        rep -= 1;
    }
 
    return 0;
}