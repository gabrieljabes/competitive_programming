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

    vector <int> shell_pos(3);
    for (int i = 0; i < 3; i++) { shell_pos[i] = i; }

    vector<int> counter(3);
    for(int i = 0; i < n; i++){
        int a,b, g;
        cin >> a >> b >> g;
        a--; b--; g--;

        swap(shell_pos[a], shell_pos[b]);
        counter[shell_pos[g]]++;
    }

cout << max({counter[0], counter[1], counter[2]}) << endl;


    return 0;
}

