#ifndef __STARTSTATE_H__
#define __STARTSTATE_H__
using namespace std;

#include "IATMState.h"

class StartState : public IATMState
{
public:
	StartState(StateMachine*);

	void InsertCard();

	void Withdraw();

	void Save();

	void GetCard();
};
#endif
