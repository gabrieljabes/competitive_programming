#include <bits/stdc++.h>

using namespace std;

int main(){

    double a, b, c;
    cin >> a >> b >> c;

    vector<double> v{a, b, c};
    sort(v.begin(), v.end(), greater<double>());

    if(v[0] >= v[1] + v[2]){
        cout << "NAO FORMA TRIANGULO" << endl;
        return 0;
    }
    if(v[0]*v[0] == v[1]*v[1] + v[2]*v[2])
        cout << "TRIANGULO RETANGULO" << endl;
    if(v[0]*v[0] > v[1]*v[1] + v[2]*v[2])
        cout << "TRIANGULO OBTUSANGULO" << endl;
    if(v[0]*v[0] < v[1]*v[1] + v[2]*v[2])
        cout << "TRIANGULO ACUTANGULO" << endl;
    if(v[0] == v[1] || v[0] == v[2] || v[1] == v[2])
        if(v[0] == v[1] && v[1] == v[2])
            cout << "TRIANGULO EQUILATERO" << endl;
        else
            cout << "TRIANGULO ISOSCELES" << endl;


    return 0;
}