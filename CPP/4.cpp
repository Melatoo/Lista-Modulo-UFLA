
#include <iostream>

using namespace std;

int soma (int a, int b) {
	if (b == 0)
		return 0;
	else return a + soma (a, b-1);
}

int main () {
	int n, m;
	cin >> n >> m;
	cout << soma (n, m);
}
