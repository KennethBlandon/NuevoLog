#include<iostream>
using namespace std;

int main() {
	int c;
	int i;
	int n;
	n = 1;
	c = 0;
	for (i=1;i<=100;i++) {
		c = (n*n)+c;
		cout << c << endl;
		n = n+1;
	}
	return 0;
}

