#include <stdio.h>

int main()
{
    double a, b, c, n1, n2, n3;;

    scanf("%lf %lf %lf", &n1, &n2, &n3);

    if(n1 >= n2 && n1 >= n3){
        a = n1;
        if(n2>n3){
            b = n2;
            c = n3;
        }else{
            b = n3;
            c = n2;
        }
    }else if(n2>=n1 && n2>=n3){
        a = n2;
        if(n1>n3){
            b = n1;
            c = n3;
        }else{
            b = n3;
            c = n1;
        }
    }else{
        a = n3;
        if(n1>n2){
            b = n1;
            c = n2;
        }else{
            b = n2;
            c = n1;
        }
    }
    if (a>=b+c){
        printf("NAO FORMA TRIANGULO\n");
    }else{
        if ((a*a)==(b*b)+(c*c)){
            printf("TRIANGULO RETANGULO\n");
        }else if ((a*a)>(b*b)+(c*c)){
            printf("TRIANGULO OBTUSANGULO\n");
        }else if((a*a)<(b*b)+(c*c)){
            printf("TRIANGULO ACUTANGULO\n");
        }
        if (a==b && b==c && c==a){
            printf("TRIANGULO EQUILATERO\n");
        }else if(a==b || b==c || c==a){
            printf("TRIANGULO ISOSCELES\n");
        }
    }
}#include <stdio.h>

int main()
{
    double a, b, c, n1, n2, n3;;

    scanf("%lf %lf %lf", &n1, &n2, &n3);

    if(n1 >= n2 && n1 >= n3){
        a = n1;
        if(n2>n3){
            b = n2;
            c = n3;
        }else{
            b = n3;
            c = n2;
        }
    }else if(n2>=n1 && n2>=n3){
        a = n2;
        if(n1>n3){
            b = n1;
            c = n3;
        }else{
            b = n3;
            c = n1;
        }
    }else{
        a = n3;
        if(n1>n2){
            b = n1;
            c = n2;
        }else{
            b = n2;
            c = n1;
        }
    }
    if (a>=b+c){
        printf("NAO FORMA TRIANGULO\n");
    }else{
        if ((a*a)==(b*b)+(c*c)){
            printf("TRIANGULO RETANGULO\n");
        }else if ((a*a)>(b*b)+(c*c)){
            printf("TRIANGULO OBTUSANGULO\n");
        }else if((a*a)<(b*b)+(c*c)){
            printf("TRIANGULO ACUTANGULO\n");
        }
        if (a==b && b==c && c==a){
            printf("TRIANGULO EQUILATERO\n");
        }else if(a==b || b==c || c==a){
            printf("TRIANGULO ISOSCELES\n");
        }
    }
}