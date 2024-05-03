#include<iostream>
using namespace std;


int main() {
	int vectorx1;
	int vectorx2;
	int vectorx3;
	int vectory1;
	int vectory2;
	int vectory3;
	cout << "Digite las coordenadas del primer vector" << endl;
	cin >> vectorx1 >> vectory1;
	cout << "Digite las coordenadas del segundo vector" << endl;
	cin >> vectorx2 >> vectory2;
	vectorx3 = vectorx1+vectorx2;
	vectory3 = vectory1+vectory2;
	cout << "El vector resultante es: " << vectorx3 << "X " << vectory3 << "Y" << endl;
	return 0;
}

