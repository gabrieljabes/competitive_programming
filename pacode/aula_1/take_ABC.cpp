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

    string input; cin >> input;
    vector<char> v;

    for(int i = 0; i < input.size(); i++){
        if(v.size() >= 2 && input[i] == 'C' && v[v.size() - 1] == 'B' && v[v.size() - 2] == 'A'){
            v.pop_back(); v.pop_back();
            continue;
        }
        else{
            v.push_back(input[i]);
        }
        
    }

    for(auto& e : v)
        cout << e;
    cout << endl;


    return 0;
}
