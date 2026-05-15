#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int i{}; // input
    int j{}; // limite

    while(cin >> i >> j){

    int max_cycle{-__INT_MAX__};
    int a = min(i, j);
    int b = max(i, j);

    //fazendo o ciclo de cada número
    for(a; a < b + 1; a++){
        int count{1};
        int n = a;
        //ciclo do número
        while(n != 1){
            if(n%2 != 0)
                n = n*3 + 1;
            else
                n /= 2;
        count++;
        }
    //pega o maior ciclo
    if(count > max_cycle)
        max_cycle = count;
    }
   
    cout << i << " " << j << " " << max_cycle << endl;
    }

    return 0;
}

