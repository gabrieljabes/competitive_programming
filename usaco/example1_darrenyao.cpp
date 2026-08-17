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

// void setIO(string name = ""){ _
//     if(name.size()){
//         freopen((name + ".in").c_str(), "r", stdin);
//         freopen((name + ".out").c_str(), "w", stdout);
//     }
// }

int main(){
    // setIO("problema");

    int bx, by; cin >> bx >> by;
    int t = 0;
    int M, N, P, Q; cin >> M >> N >> P >> Q;

    int ax = 0; int ay = 0;
    while(ax < bx && ay < by){
        ax += M;
        ay += N;
        bx -= P;
        by -= Q;
        t++;
    }

    if(ax == bx && ay == by)
        cout << t << endl;
    else
        cout << -1 << endl;
    

    return 0;
}
