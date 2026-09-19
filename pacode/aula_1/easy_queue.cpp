#include <bits/stdc++.h>
#include <queue>
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

    queue<int> queue;
    int t; cin >> t;

    for(int i = 0; i < t; i++){_
        int n; cin >> n;
        if(n == 1){
            int a; cin >> a;
            queue.push(a);
        }
        else if(n == 2){
            if(!queue.empty())
                queue.pop();
        }
        else if(n == 3){
            if(!queue.empty())
                cout << queue.front() << endl;
            else
                cout << "Empty!" << endl;
        }
    }
    return 0;

}
