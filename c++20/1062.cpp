#include <iostream>
#include <vector>
#include <queue>
#include <stack>
using namespace std;

int PermutacaoTrens (vector <int> tremSaida, int qtd){
    stack<int> estacao;
    queue<int> tremInicial;
    int vez = 0, n, i;
    
    //formar a queue do trem inicial
    n = 1;
    for (i = 0; i < qtd; i++){
        tremInicial.push(n);
        n++;
    }

    for (i = 0; i < qtd; i++){
        estacao.push(tremInicial.front());
        tremInicial.pop();

        while ((!estacao.empty()) && (estacao.top() == tremSaida[vez])){
            estacao.pop();
            vez++;
        }
    }

    if (estacao.size() == 0){
        return 1;
    } else {
        return 0;
    }

}


int main (){
    int qtd, i, n, resposta, cont = 0;

    while (true){
        if (cont > 0){
            cout << "\n";
        }
        
        cin >> qtd;
        if (qtd == 0){
            break;
        }
        
        vector<int> tremSaida(qtd);
        while (true){
            //entrada da saida final desejada
            cin >> tremSaida[0];
            if (tremSaida[0] == 0){
                    break;
            }
            
            for (i = 1; i < qtd; i++){
                cin >> tremSaida[i];
                
            }
            
            resposta = PermutacaoTrens(tremSaida, qtd);
            
            switch (resposta)
            {
            case 1:
                cout << "Yes" << endl;
                break;

            case 0:
                cout << "No" << endl;
                break;
            
            default:
                break;
            }
        }
    cont++;
    }
    
    return 0;
}