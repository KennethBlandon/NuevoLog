#include<iostream>
using namespace std;

int main() {
	int i;
	int n;
	int r;
	int factor;
	cout << "Digite el numero limite a sumar" << endl;
	cin >> n;
	r = 0;
	factor = n;
	for (i=1;i<=factor;i++) {
		r = n+r;
		n =n-1;
	}
	cout << "La suma de los numeros hasta " << factor << " es:"<< endl;
	cout << r << endl;
	return 0;
}

