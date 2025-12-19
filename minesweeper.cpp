#include <iostream>
#include <vector>

using namespace std;

void exibirField(vector <vector <char>>& field);
int contarBombas(vector <vector <char>>& field, int x, int y);
void converter(vector <vector <char>>& field);

int main(){
    int n, m; // n lines m columns
    int num_fields{};

    while(cin >> n >> m && n != 0 && m != 0){
        vector <vector <char>> field(n, vector<char>(m));
        num_fields++;


        for(auto &i : field)
            for(int j = 0; j < m; j++)
            cin >> i[j];

        converter(field);
        if(num_fields > 1) cout << endl;
        cout << "Field #" << num_fields << ":" << endl;
        exibirField(field);
    }
    return 0;

}

void exibirField(vector <vector <char>>& field){
    for(auto &i : field){
        for(int j = 0; j < i.size(); j++)
            cout << i[j];
        cout << endl;
    }
}

//faz a contagem de quantos '*' tem ao redor do elemento [x][y]
int contarBombas(vector <vector <char>>& field, int x, int y){
    int count{};
    for(int i = x - 1; i <= x + 1; i++)
        for(int j = y - 1; j <= y + 1; j++)
            if(i >= 0 && i < field.size() && j >= 0 && j < field[0].size())
                if(field[i][j] == '*')
                    count++;
    return '0' + count; //48 em ascii e 0
}

//converter os elementos na quantidade de bombas que tem ao redor
void converter(vector <vector <char>>& field){
    for(int i = 0; i < field.size(); i++){
        for(int j = 0; j < field[0].size(); j++)
            if(field[i][j] != '*')
                field[i][j] = contarBombas(field, i, j);

    }
}

