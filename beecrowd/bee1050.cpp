#include <bits/stdc++.h>

using namespace std;

int main(){

    int ddd[]{61, 71, 11, 21, 32, 19, 27, 31, 0};
    string estados[] {"Brasilia", "Salvador", "Sao Paulo", "Rio de Janeiro", "Juiz de Fora", "Campinas", "Vitoria", "Belo Horizonte"};
    int n;
    cin >> n;

    int i;
    for (i = 0; i < 8; i++){
        if(n == ddd[i]){
            break;
        }
    }

    if(ddd[i] != 0)
        cout << estados[i] << endl;
    else
        cout << "DDD nao cadastrado" << endl;
    
    return 0;
}
