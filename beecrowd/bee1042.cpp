#include <bits/stdc++.h>

using namespace std;

int main(){

    vector<int> v(3);
    cin >> v[0] >> v[1] >> v[2];
    vector<int> copia = v;

    sort(v.begin(), v.end());

    for(int i = 0; i < 3; i++)
        cout << v[i] << endl;
    cout << endl;
    for(int i = 0; i < 3; i++)
        cout << copia[i] << endl;

    return 0;

}