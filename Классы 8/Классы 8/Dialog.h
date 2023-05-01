#pragma once
#include "Event.h"
#include "Tree.h"

class Dialog : public Tree
{
public:
	Dialog(void);
	~Dialog(void);
	void GetEvent(TEvent& event); // �������� �������
	void Execute(); // ���������
	void HandleEvent(TEvent& event); // ���������� �������
	void ClearEvent(TEvent& event); // ������� �������
	bool Valid();
	void EndExec(); // ��������� ����������
protected:
	int EndState; // �������� ���������
};