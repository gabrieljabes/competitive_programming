#include <bits/stdc++.h>

using namespace std;

class Matrix{
    public:
        vector<vector<double>> elements;
        double rows, cols;

    Matrix(double m, double n){
        rows = m;
        cols = n;
        elements.resize(rows);
        for(auto& i : elements)
            i.resize(cols);
    }

    Matrix(vector<vector<double>> v){
        elements = v;
        rows = v.size();
        cols = v[0].size();
    }

    void swapRows(double l1, double l2){
        swap(elements[l1], elements[l2]);
    }

    void multiplicationRow(double lambda, double l){
        for(auto& i : elements[l])
            i *= lambda;
    }

    void sumRow(double l1, double l2){
        for(int j = 0; j < cols; j++)
            elements[l1][j] += elements[l2][j];
    }

    void sumRow(double l1, double l2, bool negative){
        if(negative){
            for(int j = 0; j < cols; j++)
                elements[l1][j] -= elements[l2][j];
        } else{
            sumRow(l1, l2);
        }
    }

    void printMatrix(){
        for(int i = 0; i < rows; i++){
            for(int j = 0; j < cols; j++)
                cout << elements[i][j] << " ";
            cout << endl;
        }
    }

    void FillMatrix(){
        for(int i = 0; i < rows; i++){
            for(int j = 0; j < cols; j++)
                cin >> elements[i][j];
        }
    }


    
};

