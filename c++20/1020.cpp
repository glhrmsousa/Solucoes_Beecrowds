#include <iostream>
using namespace std;

int main (){
    int dias;
    int anos, meses;

    cin >> dias;
    
    anos = dias / 365;
    dias -= 365 * anos;

    meses = dias / 30;
    dias -= 30 * meses;

    cout << anos << " ano(s)" << endl;
    cout << meses << " mes(es)" << endl;
    cout << dias << " dia(s)" << endl;

    return 0;
}