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
    

    int t; cin >> t;

    for(int i = 0; i < t; i++){
        int n; cin >> n;
        int c1 = int(n/3.0);
        int c2 = c1;

        if(n % 3 == 1)
            c1++;
        else if(n % 3 == 2)
            c2++;

        cout << c1 << " " << c2 << endl;
    }


    return 0;
}
