#include<iostream>
using namespace std;

int main() {
	int i;
	int num;
	int suma;
	suma = 0;
	num = 100;
	for (i=100;i<=200;i++) {
		if (num%2==0) {
			suma = num+suma;
			num = num+1;
		} else {
			num = num+1;
		}
	}
	cout << suma << endl;
	return 0;
}

