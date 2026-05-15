#include <bits/stdc++.h>

using namespace std;

int main(){

    int numeros[5];
    int i = 0, j = 0, k = 0;
    for(int n : numeros){
        cin >> n;
        if(abs(n) % 2 == 0)
            i++;
        if(n > 0)
            j++;
        if(n < 0)
            k++;
    }

    cout << i << " valor(es) par(es)" << endl;
    cout << 5 - i << " valor(es) impar(es)" << endl;
    cout << j << " valor(es) positivo(s)" << endl;
    cout << k << " valor(es) negativo(s)" << endl;


    return 0;
}