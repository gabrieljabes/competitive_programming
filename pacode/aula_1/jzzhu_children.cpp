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

typedef struct{
    int id;
    int value_wanted;
    int value = 0;
} Child; 


int main(){
    int n; cin >> n;
    int m; cin >> m;
    queue<Child> fila;

    for(int i = 0; i < n; i++){
        Child a; a.id = i + 1; cin >> a.value_wanted;
        fila.push(a);
    }


    int id_last;
    while(!fila.empty()){
        Child frente = fila.front();
        frente.value += m;
        id_last = frente.id;
        if(frente.value >= frente.value_wanted){
            fila.pop();
        }
        else{
            fila.pop();
            fila.push(frente);
        }
    }

    cout << id_last << endl;

    return 0;
}
