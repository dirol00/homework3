#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int x, y= 0;
	cin >> x;
	while (x)
	{
		y =y+ x;
		cin >> x;
	}
	cout << y;
	return 0;
}

