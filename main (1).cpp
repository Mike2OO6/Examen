#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int matriz[3][4] = {
        {4, 2, 7, 1},
        {9, 5, 3, 8},
        {6, 0, 2, 4}
    };

    for (int i = 0; i < 3; i++) {
        sort(matriz[i], matriz[i] + 4);
    }

    cout << "Matriz ordenada por filas:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

