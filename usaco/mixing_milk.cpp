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

 void setIO(string name = ""){ _
    if(name.size()){
         freopen((name + ".in").c_str(), "r", stdin);
         freopen((name + ".out").c_str(), "w", stdout);
     }
 } 

int main(){
    setIO("mixmilk");
    
    int qtd_pours = 100;
    vector <int> cap(3);
    vector <int> milk(3);

    //initial state
    for(int i = 0; i < 3; i++)
        cin >> cap[i] >> milk[i];

    //pour
    int j = 0;
    for(int i = 0; i < 100; i++){
        int bucket1 = i % 3; // %3 garante ciclo ja q 0%3 = 0, 1%3 = 1, 2%3 = 2, 3%3 = 0
        int bucket2 = (i+1) % 3;

        int amnt = min(milk[bucket1], (cap[bucket2] - milk[bucket2]));
        milk[bucket1] -= amnt;
        milk[bucket2] += amnt;
    }


    for(auto& m : milk)
        cout << m << endl;

    return 0;
}
