#include <bits/stdc++.h>

using namespace std;

bool solve(string& s){
    for(int i = 0; i < s.size() - 1; i++){
        if(s[i + 1] == s[i])
            return false;
    }
    return true;
}

string toLower(string& s){
    for(auto& i : s)
        i = tolower(i);

    return s;
}

int main(){

    int n; cin >> n;

    for(int i = 0; i < n; i++){
        string str;
        cin >> str;
        cout << str + ": ";
        string strLower = toLower(str);
        bool repeticao = solve(strLower);

        if(is_sorted(strLower.begin(), strLower.end()) && repeticao)
            cout << "0" << endl;
        else 
            cout << "N" << endl;
            cin.ignore();
    }

    return 0;
}