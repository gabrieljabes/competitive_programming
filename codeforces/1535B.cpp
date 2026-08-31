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
    for(int k = 0; k < t;  k++){
        int n; cin >> n;
        vector<int> evens;
        vector<int> odds;
        for(int l = 0; l < n; l++){
            int g; cin >> g;
            if(g % 2 == 0)
                evens.push_back(g);
            else
                odds.push_back(g);
        }

        vector<int> a;
        a = evens;
        for(auto& e : odds)
            a.push_back(e);

            
        int count = 0;

        for(int i = 0; i < a.size(); i++){
            for(int j = i + 1; j < a.size(); j++){
                if(gcd(a[i], (2*a[j])) > 1)
                    count++;
            }
        }

        cout << count << endl;
    }
    

    return 0;
}