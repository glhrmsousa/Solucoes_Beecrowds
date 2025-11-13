#include <iostream>
using namespace std;
int main()
{
    int angulo;
    
    while (cin >> angulo){
    
    if (angulo < 90 || angulo == 360){
        cout << "Bom Dia!!" << endl;
    } else if (angulo >= 90 && angulo < 180) {
        cout << "Boa Tarde!!" << endl;
    } else if (angulo >= 180 && angulo < 270){
        cout << "Boa Noite!!" << endl;
    } else if (angulo >= 270 && angulo < 360){
        cout << "De Madrugada!!" << endl;
    }
    
    }

    return 0;
}