#include "Print.h"

Print::~Print() {}

Print::Print() 
{
	name = "";
	author = "";
}

Print::Print(string name, string author) 
{
	this -> name = name;
	this -> author = author;
}

Print::Print(const Print& P) 
{
	name = P.name;
	author = P.author;
}


void Print::Show() 
{
	setlocale(LC_ALL, "ru");
	cout << "�������" << endl;
	cout << "\n�������� ��������� �������: " << name;
	cout << "\n�����: " << author << endl;
}

void Print::Input() 
{
	setlocale(LC_ALL, "ru");
	getline(cin, name);
	cout << "������� �������� �������: "; 
	getline(cin, name);
	cout << "������� ��� ������: "; 
	getline(cin, author);
}

Print& Print::operator=(const Print& p) 
{
	if (&p == this) return *this;
	name = p.name;
	author = p.author;
	return *this;
}
