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
    for(int i=0; i<t; i++){
        vector<int>s(4);
        for(int j=0; j<4; j++)
            cin>>s[j];
        
        int winner_1 = max(s[0], s[1]);
        int winner_2 = max(s[2], s[3]);

        pair<int, int> winners;
        winners.f = min(winner_1, winner_2);
        winners.s = max(winner_1, winner_2);

        vector<int> s_sorted = s;
        sort(s_sorted.begin(), s_sorted.end());
        pair<int, int> most_skilled;
        most_skilled.f = s_sorted[2];
        most_skilled.s = s_sorted[3];

        if(winners == most_skilled)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
