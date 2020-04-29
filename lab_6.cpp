#include "pch.h"
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char str[50];

	cin.getline(str, 50);

	int leng = strlen(str);

	switch (leng)
	{
		case 0:cout << "Empty string" << endl; break;
		case 1:cout << str[0]; break;
		case 2:cout << str[0] << "\t" << str[1] << endl; break;
		default: if (leng % 2 == 0)
					cout << str[0] << "\t" << str[leng - 1] << endl; 
				else cout << str[0] << "\t" << str[leng / 2 ] << "\t" << str[leng - 1] << endl;
	}

	return 0;
}
