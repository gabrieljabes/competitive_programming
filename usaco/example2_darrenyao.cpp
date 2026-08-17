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
    int n; cin >> n;
    vector <int> cap(n);
    vector <int> water(n);

    for(auto& i : cap)
        cin >> i;
    for(auto& i : water)
        cin >> i;
    
    for(int i = 0; i < n - 1; i++){
        int amnt = min(water[i], (cap[i + 1] - water[i + 1]));
        water[i] -= amnt;
        water[i + 1] += amnt;
    }

    for(auto& i : water)
        cout << i << " ";
    cout << endl;   
    
    
    return 0;
}
