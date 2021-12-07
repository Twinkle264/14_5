#include <iostream>
using namespace std;

void c_matrix (int a[4][4]) {
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
}

int main() {
    int matrix[4][4];

    cout << "Input a matrix:" << endl;

    for (int i = 0; i < 4; ++i){
        for (int j = 0; j < 4; ++j){
            cin >> matrix[i][j];
        }
    }

    cout << "Your matrix: " << endl;
    c_matrix(matrix);

    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            if (i != j) matrix[i][j] = 0;
        }
    }

    cout << endl << "Diagonal matrix: " << endl;
    c_matrix(matrix);

    return 0;
}
