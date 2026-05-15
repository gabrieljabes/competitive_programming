#include <bits/stdc++.h>

using namespace std;

int main(){

    int a, b;
    bool multiplos;
    cin >> a >> b;

    multiplos = (a % b == 0 || b % a == 0);

    if(multiplos)
        cout <<  "Sao Multiplos" << endl;
    else
        cout << "Nao sao Multiplos" << endl;

    return 0;
}