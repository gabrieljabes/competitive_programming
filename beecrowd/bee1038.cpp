#include <bits/stdc++.h>

using namespace std;


int main(){

    double item[]{4.0, 4.5, 5.0, 2.0, 1.5};
    int id;
    int qtd;
    cin >> id >> qtd;
    cout << fixed << setprecision(2);
    cout << "Total: R$ " << item[id - 1] * qtd << endl;
    

    return 0;
}