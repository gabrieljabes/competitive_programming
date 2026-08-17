#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second
#define dbg(x) << #x << " = " << x << endl;
typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

using namespace std;


struct Digit {
    int numero;
    vector<bool> segments{vector<bool>(7)};

    void setSegments(std::initializer_list<int> idxs){
        for(int i : idxs)
            segments[i] = true;
    }

    void updateSegment(){
        for(int i = 0; i < 7; i++)
            segments[i] = false; // reseta antes de setar de novo

        switch(numero){
            case 0: setSegments({0,1,2,3,4,5}); break;
            case 1: setSegments({0,1}); break;
            case 2: setSegments({0,2,3,5,6}); break;
            case 3: setSegments({0,1,2,5,6}); break;
            case 4: setSegments({0,1,4,6}); break;
            case 5: setSegments({1,2,4,5,6}); break;
            case 6: setSegments({1,2,3,4,5,6}); break;
            case 7: setSegments({0,1,5}); break;
            case 8: for(int i = 0; i < 7; i++) segments[i] = true; break;
            case 9: setSegments({0,1,2,4,5,6}); break;
            default: return;
        }
    }
};


void printDigits(vector<Digit>& numbers, int& s){
    int width  = s + 2;
    int height = 2*s + 3;

    vector<vector<string>> grids(numbers.size(), vector<string>(height, string(width, ' ')));

    for(int d = 0; d < (int)numbers.size(); d++){
        auto& seg = numbers[d].segments;
        auto& g = grids[d];

        // linha 0: f (topo)
        for(int c = 1; c <= s; c++)
            g[0][c] = seg[5] ? '-' : ' ';

        // linhas 1..s: e (sup-esq) e a (sup-dir)
        for(int r = 1; r <= s; r++){
            g[r][0]         = seg[4] ? '|' : ' ';
            g[r][width - 1] = seg[0] ? '|' : ' ';
        }

        // linha s+1: g (meio)
        for(int c = 1; c <= s; c++)
            g[s+1][c] = seg[6] ? '-' : ' ';

        // linhas s+2..2s+1: d (inf-esq) e b (inf-dir)
        for(int r = s+2; r <= 2*s+1; r++){
            g[r][0]         = seg[3] ? '|' : ' ';
            g[r][width - 1] = seg[1] ? '|' : ' ';
        }

        // linha 2s+2: c (base)
        for(int c = 1; c <= s; c++)
            g[2*s+2][c] = seg[2] ? '-' : ' ';
    }

    for(int r = 0; r < height; r++){
        for(int d = 0; d < (int)numbers.size(); d++){
            cout << grids[d][r];
            if(d + 1 < (int)numbers.size()) cout << " ";
        }
        cout << endl;
    }
}

int main(){ //_
    int s = 0;
    do{
        cin >> s;
        string n; cin >> n;

        //conversao de caracteres em inteiros
        vector<Digit> digitos(n.size());
        for(int i = 0; i < digitos.size(); i++){
            digitos[i].numero = n[i] - 48;
            digitos[i].updateSegment();
        }

        printDigits(digitos, s);
    } while(s != 0);



    return 0;
}

