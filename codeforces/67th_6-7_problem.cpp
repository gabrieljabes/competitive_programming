#include <algorithm>
#include <iostream>
#include <cmath>
#include <vector>
#include <iomanip>
#include <climits>
#define ll long long
#define INF 1e18

using namespace std;

int main(){

    int n;
    cin >> n;

    vector<int> numbers(7);

    for(int i = 0; i < n; i++){
        int soma = 0;
    for(int j = 0; j < 7; j++){
        cin >> numbers[j];
      }

      sort(numbers.begin(), numbers.end());
      soma += numbers[6];

    for(int j = 0; j < 6; j++){
        soma += numbers[j] * -1;
    }

    cout << soma << endl;
    }

    return 0;
}