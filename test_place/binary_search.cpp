#include <bits/stdc++.h>

using namespace std;

int main(){


    vector <int> v(100000000);
    for(int i = 0; i < 100000000; i++){
        v[i] = i + 1;
    }


    int x; cin >> x;
    int size = v.size();

    int a = 0;
    int b = size - 1;
    int valor;

    while(a <= b) {
        int k = (a+b)/2;
        if(v[k] == x){
            cout << "achou" << endl;
            valor = x;
            break;
        }

        if(v[k] > x)
            b = k - 1;
        else
            a = k + 1;
    }



    cout << valor << endl;
    return 0;
}