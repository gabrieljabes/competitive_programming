#include <bits/stdc++.h>

using namespace std;

int main(){

    float valor;
    cin >> valor;
    if(valor < 0 || valor > 1000000.00)
        return 0;

    int centavos = round(valor*100);

    int notas[] = {10000, 5000, 2000, 1000, 500, 200};

    int moedas[] = {100, 50, 25, 10, 5, 1};

    cout << fixed << setprecision(2)
    << "NOTAS:" << endl;
    for(int i = 0; i < 6; i++){
        cout << centavos/notas[i] << " nota(s) de R$ " << (float)(notas[i] / 100.0) << endl;
        centavos = centavos % notas[i];
    }
    
    cout << "MOEDAS:" << endl;
    for(int i = 0; i < 6; i++){
        cout << centavos/moedas[i] << " moeda(s) de R$ " << (float)(moedas[i] / 100.0) << endl;
        centavos = centavos % moedas[i];
    }

    return 0;
}