#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cin >> a;
	b = 1;
	while (b*b <= a) {
		cout << b * b << endl;
		b++;
	}
	
	return 0;

    
}

