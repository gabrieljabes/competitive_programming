#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int i{}; // input
    int j{}; // limite
    vector<int> length_cycles;

    cin >> i;
    cin >> j;

    int a = i;

    //checagem de erro
    if(i > 10000 || i <= 0 || j > 10000 || j <= 0)
        return 1;
    for(i; i < j + 1; i++){
        vector <int> ar;
        ar.push_back(i);

        int n = i;
        while(n != 1){
            if(n%2 != 0)
                n = n*3 + 1;
            else
                n /= 2;

        ar.push_back(n);
        }

    length_cycles.push_back(ar.size());
    }
    
    auto p = max_element(length_cycles.begin(), length_cycles.end());
    int max_cycles = *p;
    i = a;
    cout << i << " " << j << " " << max_cycles << endl;
    return 0;
}

