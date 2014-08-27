#ifndef __IAMSTATE_H__
#define __IAMSTATE_H__

#include <memory>
using namespace std;

class StateMachine;

class IATMState
{
public:
	IATMState(StateMachine*);

	virtual void InsertCard() = 0;

	virtual void Withdraw() = 0;

	virtual void Save() = 0;

	virtual void GetCard() = 0;
protected:
	StateMachine* m_stateMachine;
};
#endif
