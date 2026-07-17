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

int main(){ //_

    ll n; cin >> n;
    string s; cin >> s;
    ll count_one = 0, count_zero = 0;
    if(count(s.begin(), s.end(), 'n') >= 1)
        count_one = count(s.begin(), s.end(), 'n');
    if(count(s.begin(), s.end(), 'z') >= 1)
        count_zero = count(s.begin(), s.end(), 'z');
    
    for(ll i = 0; i < count_one; i++)
        cout << "1 ";
    for(ll i = 0; i < count_zero; i++)
        cout << "0 ";

    cout << endl;

    



    return 0;
}

