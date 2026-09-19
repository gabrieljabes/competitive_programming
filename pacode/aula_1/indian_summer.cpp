#include <bits/stdc++.h>
#include <cstdio>
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

    set<string> string_set;
    int n; cin >> n;

    getchar();
    for(int i = 0; i < n; i++){
        string str;
        getline(cin, str);
        string_set.insert(str);
    }

    cout << string_set.size() << endl;
}
