#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    int x;
    cin >> n;
    int countIn = 0, countOut = 0;
    for(int i = 0; i < n; i++){
        cin >> x;
        if(x >= 10 && x <= 20)
            countIn++;
        else
            countOut++;
    }

    cout << countIn << " in" << endl;
    cout << countOut << " out" << endl;

    return 0;
}