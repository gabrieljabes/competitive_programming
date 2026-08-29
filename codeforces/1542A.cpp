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

    for(int i=0;i<t;i++){
        int n; cin >> n;
        vector<int> multiset(2*n);

        int even = 0; int odd = 0;

        for(auto& e : multiset){
            cin >> e;
            if(e % 2 == 0)
                even++;
            else
                odd++;
        }

        if(even == odd)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}
