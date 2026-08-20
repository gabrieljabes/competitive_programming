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
 
    int n; cin >> n;
    
    vector<pair<int, char>> limits(n);


    int count_G_after = 0;

    for(int i = 0; i < n; i++){
        char c; cin >> c;
        int a; cin >> a;
        if(c == 'G') count_G_after++;
        limits[i].f = a; limits[i].s = c;
    }

    sort(limits.begin(), limits.end());
    
    int r = count_G_after;
    int count_L_before = 0;
    for(int i = 0; i < n; i++){
        if(limits[i].s == 'L') 
            count_L_before++;
        else
            count_G_after--; 
        r = min(r, count_L_before + count_G_after);
    }

    cout << r << endl;


    return 0;
}
