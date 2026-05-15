#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;
    
    vector <int> petals_flowers(n);

    for(int& i : petals_flowers)
        cin >> i;

    int photo_count = 0;
    for(int i = 0; i < n; i++){   
        for(int j = i; j < n; j++){
            int petals = 0;
            int flower_count = j - i + 1;
            for(int k = i; k <= j; k++)
                petals += petals_flowers[k];

            if(petals % flower_count != 0) 
                continue;

            int avg_flower = petals / flower_count;
            
            bool tem_avg_flower = false;
            for(int k = i; k <= j; k++){
                if(petals_flowers[k] == avg_flower){
                    tem_avg_flower = true;
                    break;
                }
            }

            if(tem_avg_flower)
                photo_count++;
        }
    }

    cout << photo_count << endl;

    return 0;
}