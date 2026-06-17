#include <iostream>
using namespace std;
int main(){
    int rows, col;
    cout << "enter number of rows :";
    cin >> rows;
    cout << " enter the number of columns :";
    cin >> col;
    int matrix1[100][100], transpose[100][100];
    cout << "enter the elements of the first matrix :";
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < col; j++){
            cout << "element [" << i << "][" << j << "] : ";
            cin >> matrix1[i][j];
        }
    }

    
    for(int i = 0; i < rows; i++){
        for(int j = 0; j <col; j++){
            transpose[j][i]= matrix1[i][j];
        }
    }
    cout << "transpose of the matrix: " << endl;
    for(int i = 0; i < col; i++){
        for(int j = 0; j < rows; j++){
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}