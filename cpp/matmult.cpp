#include <iostream>
#include <string>
#include <sstream>
using namespace std;
/*
void print_matrix(int mat[][], int rowsize, int colsize){
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
*/
int main(){
    int m,n; // these are the dimensions of the matrices
    double elem; // this stores the running sum of matrix element multiplications
    cout << "Please input the dimensions of your matrices" << endl;
    cin >> m;
    cin >> n;
    double LHS[m][n], RHS[n][m], Result[m][m];
    cout << "Now we'll have you input the real valued elements, starting with the LHS " << m <<"x"<<n<< " matrix. Then the RHS " <<n<<"x"<<m<< " matrix." << endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout << i+1 << "x" << j+1 << endl;
            cin >> LHS[i][j];
        }
    }
    cout << "Now for the RHS matrix " << endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << i+1 << "x" << j+1 << endl;
            cin >> RHS[i][j];
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
