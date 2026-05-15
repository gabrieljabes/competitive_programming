#include <bits/stdc++.h>

using namespace std;

int main(){

    int x;
    int i = 1;
    cin >> x;

    while(1){
        if(i == x){
            cout << i << endl;
            break;
        } else if(i > x){
            break;
        }
        cout << i << endl;
        i += 2;
    }
    
    return 0;
}