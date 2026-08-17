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
    setIO("measurement");

    int n; cin >> n;
    vector<pair<int, pair <int, int>>> inputs(n); // dia, vaca, aumento
    vector<int> cows = {7, 7, 7};

    
    for(int i = 0; i < n; i++){
        cin >> inputs[i].first;
        string str; cin >> str;

        if(str == "Bessie") inputs[i].s.f = 0;
        else if(str == "Elsie")inputs[i].s.f = 1;
        else if(str == "Mildred") inputs[i].s.f = 2;

        cin >> inputs[i].s.s;
    }

    sort(inputs.begin(), inputs.end());

    int d = 0;
    for(int i = 0; i < n; i++){
        int cow = inputs[i].s.f;
        int amnt = inputs[i].s.s;

        array<bool,3> estaoNoTopo;
        int mx = max({cows[0], cows[1], cows[2]});

        for(int j = 0; j < 3; j++)
            estaoNoTopo[j] = (cows[j] == mx);

        cows[cow] += amnt;

        array<bool,3> estaoNoTopo2;
        mx = max({cows[0], cows[1], cows[2]});

        for(int j = 0; j < 3; j++)
            estaoNoTopo2[j] = (cows[j] == mx);

        if(estaoNoTopo != estaoNoTopo2)
            d++;
    }

    cout << d << endl;
  return 0;
}