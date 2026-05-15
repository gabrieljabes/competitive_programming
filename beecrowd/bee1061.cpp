#include <bits/stdc++.h>

using namespace std;

int main(){
    int d1, h1, m1, s1;
    int d2, h2, m2, s2;
    string lixo;

    // dia 1
    cin >> lixo >> d1;
    cin >> h1;
    cin.ignore(3, ':');
    cin >> m1;
    cin.ignore(3, ':');
    cin >> s1;

    //dia 2

    cin >> lixo >> d2;
    cin >> h2;
    cin.ignore(3, ':');
    cin >> m2;
    cin.ignore(3, ':');
    cin >> s2;

    int tempo_abs_final = d2 * 3600 * 24 + h2 * 3600 + m2 * 60 + s2;
    int tempo_abs_inicial = d1 * 3600 * 24 + h1 * 3600 + m1 * 60 + s1;

    int tempo = tempo_abs_final - tempo_abs_inicial;

    int dias = tempo/(3600 * 24);
    tempo -= dias * 3600 * 24;
    int horas = (tempo)/3600;
    tempo -= horas * 3600;
    int minutos = (tempo)/60;
    int segundos = (tempo)%60;


    cout << dias << " dia(s)" << endl;
    cout << horas << " hora(s)" << endl;
    cout << minutos << " minuto(s)" << endl;
    cout << segundos << " segundo(s)" << endl;


    return 0;
}