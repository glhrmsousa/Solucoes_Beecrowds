#include <stdio.h>
 
int main() {
 
    int n, rep, in, out;
    in = 0;
    out = 0;
    scanf("%d", &rep);
    
    while(rep>0){
        scanf("%d", &n);
        if (n>=10 && n <=20){
            in += 1;
        }else{
            out +=1;
        }
        rep -= 1;
    }
    printf("%d in\n%d out\n", in, out);
    
    
    return 0;
}