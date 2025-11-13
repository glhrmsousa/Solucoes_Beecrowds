#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include <iomanip>
using namespace std;

int main (){
    int qtd;

    cin >> qtd;

    vector<string> nome(qtd);
    vector<int> sT(qtd), sC(qtd); //saquesTotais, saquesCertos
    vector<int> aT(qtd), aC(qtd); //ataquesTotais, ataquesCertos
    vector<int> bT(qtd), bC(qtd); //bloqueiosTotais, bloqueiosCertos
    double pS, pB, pA; //percentualSaques, percentualBloqueios, percentualAtaques


    for (int i = 0; i < qtd; i++){
        cin >> nome[i];
        cin >> sT[i] >> bT[i] >> aT[i];
        cin >> sC[i] >> bC[i] >> aC[i];
    }

    pS = (double) accumulate(sC.begin(), sC.end(), 0) *100.0 / accumulate(sT.begin(), sT.end(), 0);
    pB = (double) accumulate(bC.begin(), bC.end(), 0) *100.0 / accumulate(bT.begin(), bT.end(), 0);
    pA = (double) accumulate(aC.begin(), aC.end(), 0) *100.0 / accumulate(aT.begin(), aT.end(), 0);
    
    cout << "Pontos de Saque: " << fixed << setprecision(2) <<  pS << " %." << endl;
    cout << "Pontos de Bloqueio: " << fixed << setprecision(2) << pB << " %." << endl;
    cout << "Pontos de Ataque: " << fixed << setprecision(2) << pA << " %." << endl;

    return 0;
}