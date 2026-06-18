#include <iostream>
using namespace std;
int main(){
    int n;
    cout << " enter the size of the sqaure matrix :";
    cin >> n;
    int matrix[n][n];
    cout << "enter the elements of the matrix :";
    for(int i = 0; i < n ; i++){
        for(int j = 0; j < n; j++){
            cin >> matrix[i][j];
        }
    }
    bool isSymmetric  = true;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n ; j++){
            if(matrix[i][j] != matrix[j][i]){
                isSymmetric = false;
                break;
            }
        }
        if(!isSymmetric)
        break;

    }
    if(isSymmetric){
        cout << "thematrix is symmetric" << endl;
    }
    cout << "the matrix is not symmetric" << endl;
    return 0;

}