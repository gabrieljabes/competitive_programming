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


bool isBalanced(string& str, map<char, char>& par){
    stack<char> p;

    for(auto& c : str){
        if(c == '{' || c == '[' || c == '(')
            p.push(c);
        else{
            if(p.empty() == true){
                return false;
            }
            if(par[c] == p.top())
                p.pop();
        }
    }

    if(p.empty())
        return true;
    else
        return false;
}

int main(){

    map<char, char> par{{'}','{'}, {']', '['}, {')','('}};
    int n; cin >> n;
 
    for(int i = 0; i < n; i++){
        string str; cin >> str;
        if(isBalanced(str, par))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
 
    return 0;

}
