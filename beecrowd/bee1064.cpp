#include <bits/stdc++.h>

using namespace std;

int main(){

    double numeros[6];
    int count = 0;
    double soma = 0;

    for (double n : numeros){
        cin >> n;
        if(n > 0.0){
            count++;
            soma += n;
        }
    }

    double media = soma/(double)count;

    cout << fixed << setprecision(1);
    cout << count << " valores positivos" << endl;
    cout << media << endl;
    
    
    return 0;
}