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

    int t; cin >> t;
    for(int i = 0; i < t; i++){
        int n; cin >> n;
        vector<ll> deck(n);
        vector<ll> hero;

        ll sum_hero = 0;
        ll best_power = 0;
        priority_queue<ll> power_cards;

        for(auto &e : deck){
            cin >> e;
            if(e > 0)
                power_cards.push(e);
            else if(e == 0 && !power_cards.empty()){
                hero.push_back(power_cards.top());
                power_cards.pop();
            }
        }
        ll sum = 0;
        for (auto& e : hero) {
            sum+= e;
        }

        cout << sum << endl;
    }


    return 0;
}
