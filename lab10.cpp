#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Journal
{
public:
	Journal(string, string, string, int , int);
	string author, name, prod;
	int year, pages;
private:

};

Journal::Journal(string a, string b, string c, int d, int e)
{
	this->author = a;
	this->name = b;
	this->prod = c;
	this->year = d;
	this->pages = e;
}


int main()
{
	Journal  * j[10];
	for (int i = 0; i < 10; i++)
		j[i] = new Journal("author" + to_string(i), "book" + to_string(i), "prod" + to_string(i), rand(), rand());

	string author, prod;
	int year;

	cin >> author;
	cin >> prod;
	cin >> year;

	// заданий автор
	cout << "Author:" << endl;
	for (int i = 0; i < 10; i++)
		if ((j[i]->author.compare(author)) == 0)
			cout << j[i]->name << endl;

	cout << "Prod:" << endl;
	// заданий виробництво
	for (int i = 0; i < 10; i++)
		if ((j[i]->prod.compare(prod)) == 0)
			cout << j[i]->name << endl;

	cout << "> year:" << endl;
	// після заданого року
	for (int i = 0; i < 10; i++)
		if (j[i]->year < year)
			cout << j[i]->name << endl;

	return 0;
}
