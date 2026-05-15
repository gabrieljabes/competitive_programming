#include <bits/stdc++.h>

using namespace std;

int main(){

    int x;
    cin >> x;

    for(int i = 0; i < 6; i++){
        if(x % 2 == 0)
            x += 1;
        cout << x << endl;
        x += 2;       
    }
    
    return 0;
}