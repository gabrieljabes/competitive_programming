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

    priority_queue<ll> pq;

    string input;
    while(1){
        cin >> input;
        if(input == "end")
            break;

        if(input == "insert"){
            ll n; cin >> n;
            pq.push(n);
        }
        if(input == "extract"){
            cout << pq.top() << endl; 
            pq.pop();
        }
    }

    return 0;
}
