#include <bits/stdc++.h>

using namespace std;

int main(){

    int n; cin >> n;
    set<int> A;
    for(int i = 0; i < n; i++){
        int a; cin >> a;
        A.insert(a);
    }


    int m; cin >> m;
    set<int> B;
    for(int i = 0; i < m; i++){
        int b; cin >> b;
        B.insert(b);
    }

    int a_save, b_save;
    for(auto& i : A){
        int a = i;
        for(auto&j : B){
            int b = j;
            if(A.find(a+b) == A.end() && B.find(a+b) == B.end()){
                a_save = a; b_save = b;
                break;
            }
        }   
    }
    

    cout << a_save << " " << b_save << endl;

    return 0;
}