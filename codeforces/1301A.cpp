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

string solve(string& s1, string& s2, string& s3){
    for(int i = 0; i < s1.size(); i++){
        if(s3[i] != s2[i] && s3[i] != s1[i]){
            return "NO";
        }
     }
    return "YES";
}

int main(){ //_

    int n; cin >> n;
    for(int i = 0; i < n; i++){
        string str1, str2, str3;
        cin >> str1 >> str2 >> str3;
        cout << solve(str1, str2, str3) << endl;


    }
    return 0;
}

