#include <iostream>
using namespace std;
int main(){
    int rows, col;
    cout << "enter rows and columns :";
    cin >> rows >> col;
    int matrix[rows][col];
    cout << "enter elements of the matrix :" << endl;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < col; j++){
            cin >> matrix[i][j];
        }
    }
    cout << "column wise sums :" << endl;
    for(int j = 0; j < col; j++){
        int colsum = 0;
        for(int i = 0; i < rows; i++){
            colsum += matrix[i][j];
        }
        cout << "sum of column " << j+1 << ":" << colsum << endl;
    }
    return 0;
}