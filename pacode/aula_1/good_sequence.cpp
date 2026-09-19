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

int main(){

    int n; cin >> n;
    vector<ll> v(n);
    set<ll> set;

    for(auto &e : v){
        cin >> e;
        set.insert(e);
    }
    sort(v.begin(), v.end());

    ll qtd = 0;
    for(auto e : set){
        ll c;
        c = count(v.begin(), v.end(), e);
        if(c == e)
            continue;
        else if(c > e){
            ll delta = c - e;
            qtd += delta;
        }
        else if(c < e){
            ll delta = c;
            qtd += delta;
        }
    }

    cout << qtd << endl;
    return 0;

}
