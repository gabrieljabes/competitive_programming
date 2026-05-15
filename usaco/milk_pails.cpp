#include <bits/stdc++.h>

using namespace std;

int main(){
    ifstream fin("pails.in");
    ofstream fout("pails.out");
    int x, y, m;
    fin >> x >> y >> m;

    int best_s = 0;

    for(int i = 0; i <= (m/y); i++)
        for(int j = 0; j <= (m/x); j++){
            int vx = x*j;
            int vy = y*i;
            if(vx + vy > best_s && vx + vy <= m)
                best_s = vx + vy;
        }
    
    fout << best_s << endl;

    return 0;
}