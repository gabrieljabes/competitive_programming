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
    
    int n, m, k; cin >> n >> m >> k;
 
    vector<ll> desired(n);
    for(auto& i : desired)
        cin >> i;
    sort(desired.begin(), desired.end());
 
    vector<ll> apts(m);
    for(auto& i : apts)
        cin >> i;
    sort(apts.begin(), apts.end());
 
    
    ll count = 0;
    ll j = 0;
 
    for(ll i = 0; i < n; i++){
        while(j < m && apts[j] < desired[i] - k){
            j++;
        }
        if(apts[j] > desired[i] + k){
            continue;
        } else if(apts[j] >= desired[i] - k && apts[j] <= desired[i] + k){
            count++;
            j++;
        }
    }
    
    cout << count << endl;
 
 
    return 0;

}