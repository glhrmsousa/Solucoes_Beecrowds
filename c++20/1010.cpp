#include <iostream>
#include <iomanip> 
using namespace std;

int main (){
    int codigoPeca1, qtdPeca1, codigoPeca2, qtdPeca2;
    double valorPeca1, valorPeca2, valorTotal;

    cin >> codigoPeca1 >> qtdPeca1 >> valorPeca1;
    cin >> codigoPeca2 >> qtdPeca2 >> valorPeca2;

    valorTotal = (valorPeca1 * qtdPeca1) + (valorPeca2 * qtdPeca2);

    cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << valorTotal << "\n";

    return 0;
}