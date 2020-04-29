#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct stud
{
	string name;
	int group;
		int stud;
};

int main()
{
	stud s;
	ifstream fin;

	int count = 0, j = 0;
	string ars[10];
	bool ex = false;
	char t [30];
	fin.open("E:/data.txt");
	if (!fin.is_open())
		cout << "err";
	else {
		while (!fin.eof())
		{
			fin.getline(t, 30);
			s.name = t;

			fin.getline(t, 30);
			s.group = atoi(t);

			fin.getline(t, 30);
			s.stud = atoi(t);

			ex = false;
			for (int i = 0; i < j; i++)
			{
				if (s.name.compare(ars[i]) == 0)
				{
					cout << s.name << endl;
					ex = true;
					break;
				}
			}
			if (!ex)
			{
				ars[j] = s.name;
				j++;
			}
			count+= s.stud;
		}

		fin.close();
		cout << count << endl;
	}

	return 0;
}
