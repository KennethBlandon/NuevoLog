#include <iostream>
#include <vector>
using namespace std;

int main() {
    int longitud;
    cout << "Digite la longitud del vector:" << endl;
    cin >> longitud;

    vector<int> vector1(longitud);
    vector<int> vector2(longitud);

    cout << "Digite las coordenadas del primer vector:" << endl;
    for (int i = 0; i < longitud; i++) {
        cin >> vector1[i];
    }

    cout << "Digite las coordenadas del segundo vector:" << endl;
    for (int i = 0; i < longitud; i++) {
        cin >> vector2[i];
    }

    int producto = 0;
    for (int i = 0; i < longitud; i++) {
        producto += vector1[i] * vector2[i];
    }

    cout << "El producto punto de los vectores es: " << producto << endl;
    return 0;
}