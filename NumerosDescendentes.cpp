#include<iostream>
using namespace std;

int main() {
	int i;
	int n;
	n = 100;
	for (i=1;i<=100;i++) {
		if (n%2==0) {
			n = n-1;
		} else {
			cout << n << endl;
			n = n-1;
		}
	}
	return 0;
}

