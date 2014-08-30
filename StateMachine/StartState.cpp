#include <iostream>
using namespace std;

#include "StartState.h"
#include "CardInsertedState.h"
#include "StateMachine.h"

static void PrintErrorMessage()
{
	cout << "Please Insert Card First\n";
}

StartState::StartState(StateMachine* machine) :
	IATMState(machine)
{
}

void StartState::InsertCard()
{
	shared_ptr<CardInsertedState> state(new CardInsertedState(m_stateMachine));
	m_stateMachine->SetCurrentState(state);
	cout << "Card Inserted!\n";
}

void StartState::Withdraw()
{
	PrintErrorMessage();
}

void StartState::Save()
{
	PrintErrorMessage();
}

void StartState::GetCard()
{
	PrintErrorMessage();
}
