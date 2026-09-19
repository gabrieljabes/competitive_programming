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

int main(){

    ll n; cin >> n;
    set<string> st;

    for(int i = 0; i < n; i++){
        string input; cin >> input;
        st.insert(input);
    }

    cout << st.size() << endl;


    return 0;
}
