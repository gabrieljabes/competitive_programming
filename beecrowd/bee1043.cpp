#include <bits/stdc++.h>

using namespace std;

int main(){

    double a, b, c;
    cin >> a >> b >> c;

    bool triangulo;

    if(a >= b && a >= c) {
        triangulo = (a < b + c);
    } else if(b >= a && b >= c){
        triangulo = (b < a + c);
    } else if(c >= b && c>= a)
        triangulo = (c < a + b);

    cout << fixed << setprecision(1);
    if(triangulo)
        cout << "Perimetro = " << a + b + c << endl;
    else
        cout << "Area = " << ((a+b)*c)/2.0 << endl;

    return 0;
}