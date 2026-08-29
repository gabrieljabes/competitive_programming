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

        int sum = 0;
        int count = 0;

        for(int j=0;j<n;j++){
            int v;
            cin >> v;
            sum += v;
        }

        while(sum != n){
            int prox = n + 1 - sum;
            if(prox < 0)
                prox = 0;
            if(prox + sum == (n + 1)){
                sum+= prox;
            }
            n++;
            count++;
        }

        cout << count << endl;
    }

    return 0;
}
