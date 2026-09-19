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

    stack<int> p;
    string cmd;

    while(cin >> cmd){
        if(cmd == "push"){
            int n; cin >> n;
            p.push(n);
            cout << "ok" << endl;
        }
        else if(cmd == "back"){
            cout << p.top() << endl;
        }
        else if(cmd == "size"){
            cout << p.size() << endl;
        }
        else if(cmd == "pop"){
            cout << p.top() << endl;
            p.pop();
        }
        else if(cmd == "clear"){
            int size = p.size();
            for(int i = 0; i < size; i++)
                p.pop();
            cout << "ok" << endl;
        }
        else if(cmd == "exit"){
            cout << "bye" << endl;
            break;
        }

    }

    return 0;
}
