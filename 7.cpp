#include "pch.h"
#include <iostream>
using namespace std;
	int main() 
	{
		int x;
		int y = -1;
		while (cin >> x && x != 0) 
		{
			if (y < x) {
				y = x;
			}
		}

		cout << y << endl;
		return 0;
}

