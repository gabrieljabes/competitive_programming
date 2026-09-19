#include <bits/stdc++.h>
#include <cstdio>
#include <deque>
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

    int q; cin >> q;
    deque<int> dq;
    for(int i = 0; i < q; i++){
        int input; cin >> input;
        if(input == 0){
            int d; cin >> d; int x; cin >> x;
            if(d == 1)
                dq.push_back(x);
            else
                dq.push_front(x);
        }
        if(input == 1){
            int p; cin >> p;
            cout << dq.at(p) << endl;
        }
        if(input == 2){
            int d; cin >> d;
            if(d == 1)
                dq.pop_back();
            else
                dq.pop_front();
        }
    }

    return 0;
}
