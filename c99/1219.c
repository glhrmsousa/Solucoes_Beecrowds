#include <stdio.h>
#include <math.h>

int main()
{   
    int a, b, c, teste;
    double area_triangulo, p, r_inscrito, a_inscrito;
    double raio_cmaior, area_cmaior;
    double rosas, violetas, girassois;

    while((teste = scanf("%d %d %d", &a, &b, &c)) != EOF){
        if (teste != 3){
            break;
        }
        p = 1.0*(a+b+c)/2;
        area_triangulo = sqrt(p*(p-a)*(p-b)*(p-c));
        r_inscrito = area_triangulo / p;
        a_inscrito = 3.1415926535897 * r_inscrito * r_inscrito;
        raio_cmaior = (a*b*c) / (4*area_triangulo);
        area_cmaior = 3.1415926535897 * raio_cmaior * raio_cmaior;

        rosas = a_inscrito;
        violetas = area_triangulo - a_inscrito;
        girassois = area_cmaior - area_triangulo;

        printf("%.4lf %.4lf %.4lf\n", girassois, violetas, rosas);
    }
    return 0;
}