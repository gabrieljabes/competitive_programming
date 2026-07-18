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

    int n; cin >> n;
    map<int, pair<int, int>> botas;
    for(int i = 0; i < n; i++){
        int numero; cin >> numero;
        char pe; cin >> pe;
        if(pe == 'E')    
            botas[numero].f++;
        else if(pe == 'D')
            botas[numero].s++;
    }
    int count = 0;
    for(auto& i : botas){
        count += min(i.s.f, i.s.s);
    }

    cout << count << endl;

    return 0;
}

