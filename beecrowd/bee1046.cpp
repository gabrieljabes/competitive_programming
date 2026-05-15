#include <bits/stdc++.h>

using namespace std;

int main(){

    int a, b, horas;
    cin >> a >> b;

    if(a >= b)
        horas = 24 - a + b;
    else
        horas = b - a;
    cout << "O JOGO DUROU " << horas << " HORA(S)" << endl;

    return 0;
}