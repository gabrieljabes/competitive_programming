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
    int k; cin >> k;
    int acumulado = 0;
    int count = 0;

    vector<int> qtdPorMes(12);
    for(auto&i : qtdPorMes)
        cin >> i;

    sort(qtdPorMes.begin(), qtdPorMes.end(), greater<int>());

    for(int i = 0; i < 12; i++){
        if(max(k, acumulado) == acumulado)
            break;
        else
            acumulado+= qtdPorMes[i];
            count++;
    }

    if(acumulado < k)
        cout << -1 << endl;
    else 
        cout << count << endl;

    return 0;
}

