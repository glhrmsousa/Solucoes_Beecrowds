#include <iostream>
#include <iomanip> 
using namespace std;


int main (){
    double nota1, nota2, nota3, media;
    
    cin >> nota1;
    cin >> nota2;
    cin >> nota3;
    
    media = (nota1*2 + nota2*3 + nota3*5) / 10;
    
    cout << "MEDIA = " << fixed << setprecision(1) << media << "\n"; 
    
    return 0;
}