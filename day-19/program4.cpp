#include <iostream>
using namespace std;
int main(){
    int n , sum = 0;
    cout << "enter the size of the square matrix :";
    cin >> n;
    int matrix[n][n];
    cout << "enter elements of the matrix :" << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> matrix[i][j];
            if(i == j){
                sum += matrix[i][j];
            }
        }
    }
    cout << "sum of the diagonal elements :" << sum << endl;
    return 0;
}