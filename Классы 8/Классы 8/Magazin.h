#pragma once
#include "Print.h"
#include <string>

class Magazin : public Print
{
public:
    Magazin();
    Magazin(string, string, int);
    Magazin(const Magazin&);
    ~Magazin();
    int Get_pages() { return pages; } // вывод номера страницы (селектор)
    void Set_pages(int P) { pages = P; } // изменение номера страницы (модификатор)
    string Get_name() { return name; } // вывод значения страницы
    void Show();
    void Input();
    Magazin& operator=(const Magazin&);
protected:
    int pages;
};
