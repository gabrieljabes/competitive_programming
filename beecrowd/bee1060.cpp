#include <bits/stdc++.h>

using namespace std;

int main(){

    double numeros[6];
    int count = 0;

    for (double n : numeros){
        cin >> n;
        if(n > 0.0)
            count++;
    }

    cout << count << " valores positivos" << endl;
    
    
    return 0;
}