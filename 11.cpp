
#include "pch.h"
#include <iostream>
using namespace std;
	int main() {
		int a, b, c;
		cin >> a >> b >> c;
		if (a >= b && b >= c) cout << c << " " << b << " " << a;
		else if (a >= c && c >= b) cout << b << " " << c << " " << a;
		else if (b >= c && c >= a) cout << a << " " << c << " " << b;
		else if (b >= a && a >= c) cout << c << " " << a << " " << b;
		else if (c >= b && b >= a) cout << a << " " << b << " " << c;
		return 0;
	}


