#include <iostream>
using namespace std;
int main(){
    int rows, col;
    cout << "enter rows and columns : ";
    cin >> rows >> col;
    int matrix[rows][col];
    cout << "enter matrix lements : ";
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < col; j++){
            cin >> matrix[i][j];
        }
    }
    cout << "row-wise sum :";
    for(int i = 0; i < rows; i++){
        int rowSum = 0;
        for(int j = 0; j < col; j++){
            rowSum  += matrix[i][j];
        }
        cout << "sum of rows : " << i + 1 << ": " << rowSum << endl;
    }
    return 0;
}