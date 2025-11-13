#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main (){
    int tt, c, metade; // c representa caracter
    string seq; // seq representa a sequencia

    cin >> tt;
    cin.ignore();
    while(tt--){
        c = 0;
        getline(cin, seq);
    
        
        // para movimentar as letras da string
        for (c; c < seq.length(); c++){
            if ((seq[c] >= 65 && seq[c] <= 90) || (seq[c] >= 97 && seq[c] <= 122)){
                seq[c] += 3;
            }

        }
        // para inverter a string
        reverse(seq.begin(), seq.end());
        
        // para movimentar os caracteres da metade pra frente
        metade = seq.length() / 2;
        c = metade;
        for (c; c < seq.length(); c++){
            seq[c]--;
        }
        
        cout << seq << "\n";

    }
  
    return 0;
}