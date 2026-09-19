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

typedef struct{
    ll id;
    ll val;
} El;

int main(){

    int n; cin >> n;
    vector<El> v(n);
    
    for(int i = 0; i < n; i++){
        cin >> v[i].val;
        v[i].id = i;
    }

    vector<ll> odd_idxs;
    vector<ll> even_idxs;

    for(int i = 0; i < n; i++){
        if(i % 2 != 0)
            odd_idxs.push_back(v[i].id);
        else
            even_idxs.push_back(v[i].id);
    }

    if(n % 2 != 0){
        sort(even_idxs.begin(), even_idxs.end(), greater<ll>());
        for(auto &e : even_idxs)
            cout << v[e].val << " ";
        for(auto &e : odd_idxs)
            cout << v[e].val << " ";
    }
    else{
        sort(odd_idxs.begin(), odd_idxs.end(), greater<ll>());
        for(auto &e : odd_idxs)
            cout << v[e].val << " ";
        for(auto &e : even_idxs)
            cout << v[e].val << " ";
    }

    cout << endl;

    return 0;
}
