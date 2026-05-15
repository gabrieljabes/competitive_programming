#include <bits/stdc++.h>

using namespace std;

int main(){

    double n1, n2, n3, n4;
    double media;
    cin >> n1 >> n2 >> n3 >> n4;

    media = (2 * n1 + 3*n2 + 4*n3 + n4)/10;
    cout << fixed << setprecision(1);
    cout << "Media: " << media << endl;
    if(media >= 7)
        cout << "Aluno aprovado." << endl;
    else if(media < 5)
        cout << "Aluno reprovado." << endl;
    else{
        cout << "Aluno em exame." << endl;
        double exame;
        cin >> exame;
        cout << "Nota do exame: " << exame << endl;
        media += exame;
        media /= 2;

        if(media >= 5)
            cout << "Aluno aprovado." << endl;
        else
            cout << "Aluno reprovado." << endl;
        cout << "Media final: " << media << endl;
    }
    
    return 0;
}