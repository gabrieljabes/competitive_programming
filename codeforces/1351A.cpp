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

int main(){ //_

    int t; cin >> t;
    for(int i = 0; i < t; i++){
        map<pair<pair<int, int>, pair<int, int>>, int> arestas;
        string s; cin >> s;
        int count = 0;
        int x_inicial = 0; int y_inicial = 0;
        int x_final = 0; int y_final = 0;

        for(int j = 0; j < s.size(); j++){
            if(s[j] == 'N')
                y_final++;
            else if(s[j] == 'S')
                y_final--;
            else if(s[j] == 'W')
                x_final--;
            else if(s[j] == 'E')
                x_final++;

            pair<int, int> inicial = {x_inicial, y_inicial};
            pair<int, int> final = {x_final, y_final};
            pair<pair<int, int>, pair<int, int>> aresta = {inicial, final};
            pair<pair<int, int>, pair<int, int>> aresta_inversa = {final, inicial};

            arestas[aresta]++;
            arestas[aresta_inversa]++;
            x_inicial = x_final;
            y_inicial = y_final;

            
            if(arestas[aresta] == 1)
                count+=5;
            else if(arestas[aresta] > 1)
                count++;
        }
        cout << count << endl;
    }

    
    return 0;
}

