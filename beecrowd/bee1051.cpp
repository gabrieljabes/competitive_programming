#include <bits/stdc++.h>

using namespace std;

int main(){

    double salario;
    double ir = 0.0;

    cin >> salario;

    if(salario > 0.0 && salario <= 2000.0){
        cout << "Isento" << endl;
        return 0;
    }

    if(salario > 4500){
        ir += 1000 * 0.08;
        ir += 1500 * 0.18;
        ir += (salario - 4500.0) * 0.28;
    } else if(salario > 3000.0){
        ir += 1000 * 0.08;
        ir += (salario - 3000.0) * 0.18;
    } else{
        ir += (salario - 2000.0) * 0.08;
    }

    cout << fixed << setprecision(2);
    cout << "R$ " << ir << endl;
    
    return 0;
}