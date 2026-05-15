#include <bits/stdc++.h>

using namespace std;

int main(){

    int a, b, c, d;

    cin >> a >> c >> b >> d;

    // em minutos;
    int tempo_abs_final = (b * 60) + d; 
    int tempo_abs_inicial = (a * 60) + c;

    if(tempo_abs_final <= tempo_abs_inicial)
        tempo_abs_final += 24*60;

    int tempo = tempo_abs_final - tempo_abs_inicial;
    int horas = tempo/60;
    int minutos = tempo%60;

    cout << "O JOGO DUROU " << horas << " HORA(S) E " << minutos << " MINUTO(S)" << endl;

    return 0;
}