#include <iostream>
using namespace std;

#include "CardInsertedState.h"
#include "StartState.h"
#include "StateMachine.h"

static double GetAmount()
{
	cout << "Enter amount: ";
	double amount;
	cin >> amount;
	return amount;
}

CardInsertedState::CardInsertedState(StateMachine* machine) :
	IATMState(machine)
{
}

void CardInsertedState::InsertCard()
{
	cout << "You've inserted a card!\n";
}

void CardInsertedState::Withdraw()
{
	double amount = GetAmount();
	cout << "You withdrawed " << amount << endl;
}

void CardInsertedState::Save()
{
	double amount = GetAmount();
	cout << "You saved " << amount << endl;
}

void CardInsertedState::GetCard()
{
	m_stateMachine->SetCurrentState(make_shared<StartState>(m_stateMachine));
	cout << "Please Get Your Card ASAP!\n";
}