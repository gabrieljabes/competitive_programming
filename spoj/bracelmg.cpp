#include <bits/stdc++.h>

using namespace std;

int main(){

    int n; cin >> n;

    for(int i = 0; i < n; i++){
        string str1; cin >> str1;
        string str2; cin >> str2;
        string str1_inversa = str1;
        reverse(str1_inversa.begin(), str1_inversa.end());
        string strfinal = str2 + str2;

        if((strfinal.find(str1) != string::npos) || (strfinal.find(str1_inversa) != string::npos)){
            cout << 'S' << endl;
            cin.ignore();
        }
        else
            cout << 'N' << endl;


    }
    return 0;
}