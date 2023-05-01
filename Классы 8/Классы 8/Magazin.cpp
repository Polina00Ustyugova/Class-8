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
	cout << "ЖУРНАЛЫ" << endl;
	cout << "\nНазвание журнала: " << name;
	cout << "\nАвтор журнала: " << author;
	cout << "\nКоличество страниц: " << pages << endl;
}

void Magazin::Input() 
{
	setlocale(LC_ALL, "ru");
	getline(cin, name);
	cout << "Введите название журнала: "; 
	getline(cin, name);
	cout << "Введите имя автора: "; 
	getline(cin, author);
	cout << "введите количество страниц: "; 
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