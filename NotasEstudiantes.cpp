#include<iostream>
using namespace std;

int main() {
	int estu;
	int i;
	int n;
	float prom;
	estu = 0;
	prom = 0;
	for (i=1;i<=10;i++) {
		cout << "Digite la nota del estudiante numero " << i << endl;
		cin >> n;
		estu = n+estu;
	}
	prom = estu/10;
	cout << prom << endl;
	return 0;
}

