#include <bits/stdc++.h>

using namespace std;

void exibirReajuste(double& salario, double& percentual);

int main(){

    double salario;
    cin >> salario;

    double percentual;
    if(salario >= 0.0 && salario <= 400.0)
        percentual = 15.0;
    if(salario > 400.0 && salario <= 800.0)
        percentual = 12.0;
    if(salario > 800.0 && salario <= 1200.0)
        percentual = 10.0;
    if(salario > 1200.0 && salario <= 2000.0)
        percentual = 7.0;
    if(salario > 2000.0)
        percentual = 4.0;

    cout << fixed << setprecision(2);
    exibirReajuste(salario, percentual);

    return 0;
}

void exibirReajuste(double& salario, double& percentual){
    cout << "Novo salario: " << salario * (100+percentual)/100.0 << endl;
    cout << "Reajuste ganho: " << (salario * (100+percentual)/100.0) - salario << endl;
    cout << "Em percentual: " << (int)percentual << " %" << endl;
}