#include <bits/stdc++.h>

using namespace std;

int main(){

    int dim;

    cin >> dim;
    int vector[dim];

    // vector tem forma a + bx + cx² + dx³ + ...
    for(int i = 0; i < dim; i++)
        cin >> vector[i];
    int matrix_derivada[dim][dim];


    for(int i = 0; i < dim; i++){
        for(int j = 0; j < dim; j++){
            matrix_derivada[i][j] = 0;
        }
    }

    for(int i = 0; i < dim; i++)
            matrix_derivada[i][i+1] = i+1;


    //vetor com a transformaçao aplicada
        int vector_t[dim];
    for(int i = 0; i < dim - 1; i++){
        vector_t[i] = matrix_derivada[i][i+1] * vector[i+1];
    }
    vector_t[dim - 1] = 0;

    for(int i = 0; i < dim; i++){
        cout << vector_t[i] << " ";
    }
    cout << endl;

    return 0;
}