#include <iostream>
using namespace std;
int main(){
    int rows, col;
    cout << "enter number of rows :";
    cin >> rows;
    cout << " enter the number of columns :";
    cin >> col;
    int matrix1[100][100], matrix2[100][100], diff[100][100];
    cout << "enter the elements of the first matrix :";
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < col; j++){
            cout << "element [" << i << "][" << j << "] : ";
            cin >> matrix1[i][j];
        }
    }
    cout << " enter the elements of the second matrix :";
    for(int i  = 0; i < rows; i++){
        for(int j = 0; j < col; j++){
            cout <<"elements [" << i << "][" << j << "]: ";
            cin >> matrix2[i][j];
        }
    }
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < col; j++){
            diff[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
    cout << "\nresultant sum matrix : \n";
    for(int i = 0; i < rows; i++){
        for(int j= 0; j < col; j++){
            cout << diff[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}