#include <bits/stdc++.h>

using namespace std;

int main(){

    int x, y, soma = 0;
    cin >> x >> y;
    int intervalo = max(x, y) - min(x, y);

    for(int i = 1; i < intervalo; i++){
        if((min(x, y) + i) % 2 != 0)
            soma += min(x, y) + i;
    }

    cout << soma << endl;

    return 0;

}