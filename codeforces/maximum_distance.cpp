#include <vector>
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){

    int n;
    cin >> n;
    int x[n], y[n];

    for(int i = 0; i < n; i++)
        cin >>  x[i];
    for(int i = 0; i < n; i++)
        cin >> y[i];

    int maxDist = 0;
    int best_deltaX = 0;
    int best_deltaY = 0;

    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            int deltaX = x[i] - x[j];
            int deltaY = y[i] - y[j];


            int Dist = (deltaX*deltaX) + (deltaY*deltaY);
            maxDist = max(maxDist, Dist);
        }
    }

    cout << maxDist << endl;
            
    return 0;
}