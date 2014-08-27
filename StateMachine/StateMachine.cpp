#include <iostream>
#include <memory>
using namespace std;

#include "StateMachine.h"
#include "StartState.h"

static void DisplayMenu()
{
	cout << "1. Insert Card. \n"
	     << "2. Withdraw Money. \n"
	     << "3. Save Money. \n"
	     << "4. Get Card. \n"
	     << "0. Exit System. \n";
}

StateMachine::StateMachine()
{
	shared_ptr<StartState> state(new StartState(this));
	m_current = state;
}

void StateMachine::SetCurrentState(shared_ptr<IATMState> state)
{
	m_current = state;
}

void StateMachine::Run()
{
	int choice;
	do
	{
		DisplayMenu();
		cin >> choice;
		switch (choice)
		{
			case 1:
				m_current->InsertCard();
				break;
			case 2:
				m_current->Withdraw();
				break;
			case 3:
				m_current->Save();
				break;
			case 4:
				m_current->GetCard();
				break;
			default:
				break;
		}
	}while (choice != 0);
}