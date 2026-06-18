#include <iostream>
using namespace std;
int main(){
    int rows, col;
    cout << "enter number of rows :";
    cin >> rows;
    cout << " enter the number of columns :";
    cin >> col;
    int matrix1[100][100], matrix2[100][100], res[100][100];
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
            res[i][j] = 0;
        }
    }
    for(int i = 0; i < rows; i++){
        for(int j  = 0; j < col; j++){
            for(int k = 0; k < col; k++){
                res[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    cout << "output matrix :" << endl;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < col; j++){
            cout << res[i][j] << " ";
            }
        cout << endl;
    }
    return 0 ;

}