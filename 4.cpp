
#include "pch.h"
#include <iostream>
using namespace std;
int main()
{   
	int a;
	cin >> a;
	while (a>1)
	{
		if (a%2==0)
		{
			a = a / 2;
		}
	}
	if (a>1)
	{
		cout << "no" << endl;

	}
	else
	{
		cout << "yes" << endl;
	}
	return 0;
}

