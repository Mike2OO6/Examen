#include <iostream>
using namespace std;

int main() {
    const int X = 2, Y = 3, Z = 3;
    int cubo[X][Y][Z] = {
        { {1,2,3}, {4,5,6}, {7,8,9} },
        { {2,4,6}, {8,10,12}, {14,16,18} }
    };

    for (int x = 0; x < X; x++) {
        int suma = 0, contador = 0;
        for (int y = 0; y < Y; y++) {
            for (int z = 0; z < Z; z++) {
                suma += cubo[x][y][z];
                contador++;
            }
        }
        double promedio = (double)suma / contador;
        cout << "Promedio de la capa " << x << " = " << promedio << endl;
    }
    return 0;
}

