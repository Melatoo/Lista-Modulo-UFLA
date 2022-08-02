#include <iostream>

using namespace std;

int dFatorial (int a) {
	if (a == 0 || a == 1 )
		return 1;
	else
		 return dFatorial (a - 2)* a ;
}

int main () {
	int n;
	cin >> n;
	cout << dFatorial (n);
}
