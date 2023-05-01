#pragma once
#include "Event.h"
#include "Tree.h"

class Dialog : public Tree
{
public:
	Dialog(void);
	~Dialog(void);
	void GetEvent(TEvent& event); // Получить событие
	void Execute(); // выполнять
	void HandleEvent(TEvent& event); // обработать событие
	void ClearEvent(TEvent& event); // удалить событие
	bool Valid();
	void EndExec(); // завершить выполнение
protected:
	int EndState; // конечное положение
};