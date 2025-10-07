#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 2, 4, 1, 5, 3};
    vector<int> resultado;

    for (int i = 0; i < arr.size(); i++) {
        bool repetido = false;
        for (int j = 0; j < resultado.size(); j++) {
            if (arr[i] == resultado[j]) {
                repetido = true;
                break;
            }
        }
        if (!repetido) {
            resultado.push_back(arr[i]);
        }
    }

    cout << "Arreglo sin duplicados: ";
    for (int x : resultado) cout << x << " ";
    cout << endl;
    return 0;
}
