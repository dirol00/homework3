#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int a, b, i;
	cin >> a;
	i = a;
    b = a;
	while (i>1)
	{
		if (a%i==0)
		{
			b = i;
		}
		i--;
	}
	cout << b <<endl;
	return 0;
}

