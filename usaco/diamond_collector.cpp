#include <bits/stdc++.h>

using namespace std;

int main(){
    ifstream fin("diamond.in");
    ofstream fout("diamond.out");
    
    int n, k;
    fin >> n >> k;

    
    vector <int> sizes(n);

    int best_qtd = 1;
    for(int i = 0; i < n; i++)
        fin >> sizes[i];

    sort(sizes.begin(), sizes.end());

    for(int i = 0; i < n - 1; i++){
        int qtd = 1;
        for(int j = i+1; j < n; j++){
            if(abs(sizes[j] - sizes[i]) <= k){
                qtd++;
            }
        }

        if(qtd > best_qtd)
            best_qtd = qtd;
    }    

    fout << best_qtd << endl;

    return 0;
}