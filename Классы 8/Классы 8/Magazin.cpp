#include "Magazin.h"

Magazin::~Magazin() {}

Magazin::Magazin() 
{
	pages = 0;
}

Magazin::Magazin(string N, string A, int P) : Print(N, A)
{
	pages = P;
}

Magazin::Magazin(const Magazin& P) 
{
	name = P.name;
	author = P.author;
	pages = P.pages;
}


void Magazin::Show() 
{
	setlocale(LC_ALL, "ru");
	cout << "�������" << endl;
	cout << "\n�������� �������: " << name;
	cout << "\n����� �������: " << author;
	cout << "\n���������� �������: " << pages << endl;
}

void Magazin::Input() 
{
	setlocale(LC_ALL, "ru");
	getline(cin, name);
	cout << "������� �������� �������: "; 
	getline(cin, name);
	cout << "������� ��� ������: "; 
	getline(cin, author);
	cout << "������� ���������� �������: "; 
	cin >> pages;
}

Magazin& Magazin::operator=(const Magazin& p) 
{
	if (&p == this) return *this;
	name = p.name;
	author = p.author;
	pages = p.pages;
	return *this;
}