#include <iostream>
#include <cmath>

using namespace std;

int fib (int a) {
	if (a == 0)
		return 0;
	else if (a == 1)
		return 1;
	else return fib(a-1) + (a-2);
}

int main () {
	int i = 0, n;
	cin >> n;
	while (i < n) {
		cout << fib (i) << " ";
		i++;
	}
}
