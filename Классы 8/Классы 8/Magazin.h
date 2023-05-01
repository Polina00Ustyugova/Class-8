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
    int Get_pages() { return pages; } // ����� ������ �������� (��������)
    void Set_pages(int P) { pages = P; } // ��������� ������ �������� (�����������)
    string Get_name() { return name; } // ����� �������� ��������
    void Show();
    void Input();
    Magazin& operator=(const Magazin&);
protected:
    int pages;
};
