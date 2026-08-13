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


int main(){ //_

    int t; cin >> t;
    for(int k = 0; k < t; k++){
        int n, m; cin >> n >> m;
        int count = 0;
        vector<vector<char>> matrix(n, vector<char>(m));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(count != n*m - 1)
                    matrix[i][j] = 'B';
                else
                    matrix[i][j] = 'W';
                count++;
            }
        }

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++)
                cout << matrix[i][j];
            cout << endl;
        }
    }

    return 0;
}

