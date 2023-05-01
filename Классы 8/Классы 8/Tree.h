#pragma once
#include "Magazin.h"
#include "Object.h"

class Tree 
{
public:
	Tree();
	Tree(int);
	~Tree();

	void Add();
	void Del();
	void Show();
	void Get_Name();
	int operator()();
protected:
	Object** beg; // указатель на динамический массив указателей
	int size; // размер
	int cur; // номер последнего элемента, добавленного в группу
};