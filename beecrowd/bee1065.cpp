#include <bits/stdc++.h>

using namespace std;

int main(){

    int n[5];
    int count = 0;
    for(int i : n){
        cin >> i;
        if(abs(i) % 2 == 0)
            count++;
    }

    cout << count << " valores pares" << endl;
    
    return 0;
}