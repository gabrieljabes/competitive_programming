#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;


    for(int i = 0; i < n; i++){
        int x, y;
        cin >> x;
        if(x == -67 || x == 67){
            y = x;
        } else{
            y = x + 1;
        }
        cout << y << endl;
    }

    return 0;
}