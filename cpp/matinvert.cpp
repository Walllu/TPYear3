#include <iostream>
#include <string>
#include <sstream>
#include <armadillo>
using namespace std;
using namespace arma;
// This program makes use of the "armadillo" linear algebra library
// To compile and link, use: g++ example.cpp -o example -O2 -larmadillo

void print_matrix(int** mat, int rowsize, int colsize){
    for(int i=0;i<rowsize;i++){
        for(int j=0;j<colsize;j++){
            if(j==colsize-1){
                cout << mat[i][j] << " " << endl;
            } else {
                cout << mat[i][j] << " "
            }
        }
    }
}

int main(){
    int m; // the dimension of the square matrix
    double elem; // this stores the running sum of matrix element multiplications
    cout << "Please input the dimensions of your matrix" << endl;
    cin >> m;
    double LHS[m][m], RHS[m][m];
    cout << "Let's input the real valued elements of your square matrix!"  << endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cout << i+1 << "x" << j+1 << endl;
            cin >> LHS[i][j];
        }
    }
    
    // Now I'll do the matrix multiplication...
    for(int i=0;i<m;i++){ // for every row in the LHS matrix
        for(int j=0;j<m;j++){ // for every col in the RHS matrix
            elem = 0;
            for(int k=0;k<n;k++){ // iteration along the row/down the column
                elem+= LHS[i][k]*RHS[k][j];
            }
            Result[i][j] = elem;
        }
    }
    cout << endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            if(j==m-1){
                cout << Result[i][j] << " " << endl;
            } else {
                cout << Result[i][j] << " ";
            }
        }
    }
}
