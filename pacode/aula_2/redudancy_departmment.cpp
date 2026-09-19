#include <bits/stdc++.h>
#include <cstdio>
#include <functional>
#include <queue>
#include <string>
#include <unordered_map>
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

    unordered_map<ll, ll> mp;
    ll input;
    while(cin >> input){
        mp[input]++;
    }

    stack<pair<ll, ll>> v;

    for(auto &e : mp){
        pair<ll,ll> p;
        p.first = e.first;
        p.second = e.second;
        v.push(p);
    }

    ll n = v.size();
    for(int i = 0; i < n; i++){
        cout << v.top().first << " " << v.top().second << endl;
        v.pop();
    }

    return 0;
}
