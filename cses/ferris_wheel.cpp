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
    
    ll n; cin >> n;
    ll max_weight; cin >> max_weight;
 
    vector<ll> children(n);
 
    for(ll i = 0; i < n; i++)
        cin >> children[i];
 
    sort(children.begin(), children.end(), greater<ll>());
 
 
    ll count = 0;
 
    ll pos_initial = 0;
    ll pos_final = n - 1;
 
    while(pos_final - pos_initial >= 0){
        if((children[pos_initial] + children[pos_final]) <= max_weight){
            pos_initial++; pos_final--;
        } else{
            pos_initial++;
        }
        count++;
    }
 
    cout << count << endl;
    return 0;
}