#include <bits/stdc++.h>

using namespace std;

int main(){

    int a, b, c, d;

    cin >> a >> b >> c >> d;

    bool bc = (b > c);
    bool da = (d > a);
    bool sum_cdba = (c + d > a + b);
    bool pos_cd = (c > 0 && d > 0);
    bool a_par = (a % 2 == 0);

    if(bc && da && sum_cdba && pos_cd && a_par)
        cout << "Valores aceitos" << endl;
    else
        cout << "Valores nao aceitos" << endl;


    return 0;
}