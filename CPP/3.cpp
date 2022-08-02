#include <iostream>

using namespace std;

int fi (int a, int b, int c) {
	if (c == 0)
		return a;
	else if (c == 1)
		return b;
	else return fi (a, b, c-1) + fi (a, b, c-2);
}

int main () {
	int n, n1, n2, i = 0;
	cin >> n >> n1 >> n2;
	while (i < n2) {
		cout << fi(n, n1, i) << " ";
		i++;
	}
}
