#include <iostream>

using namespace std;

float dist (float a, float b, float c) {
	float t;
	t = (b * c);
	return t + a;
}

float milha (float a) {
	float m;
	m = a / 1.852;
	return m;
}

int main () {
	float n, n1, n2, d;
	cin >> n >> n1 >> n2;
	while (n > 0) {
		d = dist (n, n1, n2);
		cout << milha(n) << " " << milha (d) << endl;
		cin >> n >> n1 >> n2;
	}
}

