#include <algorithm>
#include <bits/stdc++.h>
#include <cmath>
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
    
    int n; cin >> n;
    int t; cin >> t;

    vector<ll> v(n);
    
    for(auto& e : v)
        cin >> e;

    for(int i = 0; i < t; i++){

        ll x; cin >> x;
        ll a = 0; ll b = n;

        while(a < b){
            ll mid = (a+b)/2;
            if(v[mid] >= x)
                b = mid;
            else if(v[mid] < x)
                a = mid + 1;
        }


        if(v[a] == x){
            cout << a << endl;
        } else{
            cout << -1 << endl;
        }

        
    }


    return 0;
}
