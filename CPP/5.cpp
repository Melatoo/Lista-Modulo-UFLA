#include <iostream>

using namespace std;

int h (int a);

int f (int a) {
	if (a == 0) 
		return 1;
	else if (a > 0 && a % 2 == 0)
		return 2 * h(a) + f(a-1);
	else if (a > 0 && a % 2 != 0)
		return 2 * h(a) - f (a-1);
	else return 0;
}

int h (int a) {
	if (a == 0)
		return 0;
	else
		return h(a-1) + f(a-1);
}

int main () {
	int a;
	cin >> a;
	cout << f(a);
}
