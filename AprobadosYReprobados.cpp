#include<iostream>
using namespace std;

int main() {
	int aprobados;
	int grupo;
	int i;
	int n;
	float prom;
	int reprobados;
	grupo = 0;
	reprobados = 0;
	aprobados = 0;
	for (i=1;i<=8;i++) {
		cout << "Digite la nota del estudiante numero :" << i << endl;
		cin >> n;
		if (n>70) {
			aprobados = aprobados+1;
		} else {
			reprobados = reprobados+1;
		}
		grupo = n+grupo;
	}
	prom = grupo/8;
	cout << "El numero de estudiantes Reprobados son: " << reprobados << endl;
	cout << "El numero de estudiantes Aprobados son: " << aprobados << endl;
	cout << "El promedio general del grupo es de: " << prom << endl;
	return 0;
}

