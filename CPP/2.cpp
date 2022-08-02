#include <iostream>

using namespace std;

int tri (int a) {
	if (a == 1 || a == 2)
		return 1;
	else if (a == 3)
		return 2;
	else return tri(a-1) + tri(a-2) + tri(a-3);
}

int main () {
	int a, i = 1;
	cin >> a;
	while (a >= i) {
		cout << tri(i) << " ";
		i++;
	}
}
