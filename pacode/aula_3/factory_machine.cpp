#include <bits/stdc++.h>
#define ll long long
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n';

using namespace std;

bool ok(ll i, ll t, vector<ll>& v){
    ll sum = 0;
    for(auto &e : v){
        sum+= i/e;
        if(sum >= t)
            return true;
    }
    return false;
}

void solve(){
    ll n; cin >> n; ll t; cin >> t;

    vector<ll> p(n);
    for(auto &e : p)
        cin >> e;

    ll left = 0, right = 1e18;
    while(left < right){
        ll mid = (left + right)/2;
        if(ok(mid, t, p))
            right = mid;
        else
            left = mid + 1;
    }

    cout << left << endl;

}

int main(){
    _
    solve();

    return 0;
}

