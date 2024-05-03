#include<iostream>
using namespace std;


int main() {
	int i;
	int longt;
	int producto;
	int vector1[2];
	int vector2[2];
	producto = 0;
	cout << "Digite la longitud del vector:" << endl;
	cin >> longt;
	for (i=0;i<=longt-1;i++) {
		cout << "Digite las coordenadas del primer vector:" << endl;
		cin >> vector1[0];
	}
	for (i=0;i<=longt-1;i++) {
		cout << "Digite las coordenadas del segundo vector: " << endl;
		cin >> vector2[0];
	}
	for (i=0;i<=longt-1;i++) {
		producto = producto+(vector1[0]+vector2[0]);
	}
	cout << "El producto punto de los vectores es: " << producto << endl;
	return 0;
}

