# include <iostream>
using namespace std;
int main(){
    int n;
    cout << "enter the number of elements:";
    cin >> n;
    int arr[100];
    int sum = 0;
    cout << " enter " << n << " numbers: " << endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        sum = sum + arr[i];
    }
    double average = double(sum)/n;
    cout << " \nSum " << sum << endl;
    cout << "Average: " << average << endl;
    return 0;
}