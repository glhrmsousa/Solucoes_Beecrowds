#include <iostream>
#include <iomanip> 
using namespace std;
int main()
{
    double angulo;
    int segundos, minutos, horas;
    
    while (cin >> angulo){
    
    if (angulo < 90.0 || angulo == 360.0){
        cout << "Bom Dia!!" << endl;
    } else if (angulo >= 90.0 && angulo < 180.0) {
        cout << "Boa Tarde!!" << endl;
    } else if (angulo >= 180.0 && angulo < 270.0){
        cout << "Boa Noite!!" << endl;
    } else if (angulo >= 270.0 && angulo < 360.0){
        cout << "De Madrugada!!" << endl;
    }
    
    segundos = angulo * 240;
    
    minutos = segundos / 60;
    segundos -= minutos * 60;
    
    horas = minutos / 60;
    minutos -= horas * 60;
    horas += 6;
    
    if (horas >= 24){
        horas -= 24;
    }
    
    cout << setw(2) << setfill('0') <<  horas << ":"; 
    cout << setw(2) << setfill('0') <<  minutos << ":";
    cout << setw(2) << setfill('0') <<  segundos << endl;
    }

    return 0;
}