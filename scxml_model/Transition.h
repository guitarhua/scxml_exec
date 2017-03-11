#pragma once
#include "stdafx.h"
class Transition
{
public:
	Transition(void);
	~Transition(void);
	char* m_TransId;//�Զ�������
	static int num;
	string m_Event;// execute ecent
	string m_SourceStateId;
	string m_TargetStateId;
	Transition* Next;

	//************************************
	// Method:    AddTransition
	// Description: �����µ�transition�������
	// Access:    public 
	// Returns:   bool
	// Qualifier:
	// Parameter: Transition * newTransition
	//************************************
	bool AddTransition(Transition* newTransition);
};
