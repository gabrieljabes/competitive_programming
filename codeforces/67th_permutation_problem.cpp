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
    int qnt_tests;
    cin >> qnt_tests;

    for(int k = 0; k < qnt_tests; k++){
        int n; // tamanho de blocos de medianas
        cin >> n;
        vector<int> permutation(3*n); 
        vector<vector<int>> medians(n, vector<int>(3));
        int save_i = 0;
        int save_j = 0; 
        for(int i = 0; i < permutation.size(); i++)
            permutation[i] = i+1;

        for(int i = 0; i < medians.size(); i++){
            medians[i][0] = permutation[i];
            save_i = i;
            }

        for(int i = 0; i < medians.size(); i++){
            
            for(int j = 1; j < medians[0].size(); j++){
                medians[i][j] = permutation[save_i + save_j + 1];
                save_j++;
                }
            }

        for(int i = 0; i < medians.size(); i++){
            for(int j = 0; j < medians[0].size(); j++){
            cout << medians[i][j] << " ";
                }
            }
        cout << endl;
    }
    
    return 0;
}