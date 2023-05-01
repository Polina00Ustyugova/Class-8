#include "Tree.h"
#include "Dialog.h"
#include "Event.h"
#include "Magazin.h"
#include "Object.h"
#include "Print.h"
#include <Windows.h>

int main() {
	setlocale(LC_ALL, "Ru");
	SetConsoleCP(1251); 
	SetConsoleOutputCP(1251);
	cout << "m: Создать группу\n";
	cout << "+: Добавить элемент\n";
	cout << "-: Удалить элемент\n";
	cout << "s: вывести информацию об элементах группы\n";
	cout << "z: вывести информацию о названиях элементов группы\n";
	cout << "q: Выход\n";
	Dialog D;
	D.Execute();
	return 0;
}