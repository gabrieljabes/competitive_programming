#include <bits/stdc++.h>
#include <cstdio>
#include <queue>
#include <string>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second
#define dbg(x) << #x << " = " << x << endl;
typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
using namespace std;


int main(){_

    int n; cin >> n; int m; cin >> m;

    multiset<ll> prices;
    for(int i = 0; i < n; i++){
        ll x; cin >> x;
        prices.insert(x);
    }

    vector<ll> max_value(m);
    for(auto& e : max_value)
        cin >> e;


    for(auto &e : max_value){
        auto a = prices.upper_bound(e);

        if(a == prices.begin()){
            cout << -1 << endl;
        } else{
            a--;                         
            cout << *a << endl;
            prices.erase(a);        
        }
    }

    return 0;
}
